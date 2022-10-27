/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 19:31:15 by cyetta            #+#    #+#             */
/*   Updated: 2022/10/27 20:41:22 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

AMateria*	Character::getInventory(const int idx) const
{
	return inventory[idx];
}

void	Character::drop2floor(AMateria *m)
{
	if (floorCount + 1 > floorQantity)
	{
		//resize floor[]
		floorQantity += (floorQantity / 2 + 1);
		AMateria**	tmp = new AMateria*[floorQantity];
		for(int i = 0; i < floorCount; i++)
			tmp[i] = floor[i];
		delete [] floor;
		floor = tmp;
	}
	floor[floorCount++] = m;
}

Character::Character(std::string _name) : name(_name), floorCount(0), floorQantity(3)
{
	for(int i = 0; i < 4; i++)
		inventory[i] = NULL;
	floor = new AMateria*[floorQantity];
}

Character::Character(const Character& val) : name(val.getName()), floorCount(0), floorQantity(3)
{
	for(int i = 0; i < 4; i++)
		if(val.getInventory(i))
			inventory[i] = val.getInventory(i)->clone();
		else
			inventory[i] = NULL;
	floor = new AMateria*[floorQantity];
}

Character::~Character()
{
	for(int i = 0; i < 4; i++)
		if (inventory[i])
			delete inventory[i];
	for(int i = 0; i < floorCount; i++)
		delete floor[i];
	delete [] floor;
}

Character& Character::operator = (const Character &val)
{
	if (this == &val)
		return *this;

	name = val.getName();
	for(int i =0; i < 4; i++)
	{
		if (inventory[i])
			delete inventory[i];
		if(val.getInventory(i))
			inventory[i] = val.getInventory(i)->clone();
		else
			inventory[i] = NULL;
	}
	return *this;
}

std::string const &	Character::getName() const
{
	return name;
}

void	Character::equip(AMateria *m)
{
	if (!m)
		return;
	for(int i = 0; i < 4; i++)
		if(!inventory[i])
		{
			inventory[i] = m;
			return;
		}
	std::cout << name << ". Equipment is full\n" << *this;
}

void	Character::unequip(int idx)
{
	if (!inventory[idx])
	{
		std::cout << name << " unequip. No equipment in slot [" << idx % 4 << "]\n"<< *this;
		return;
	}
	drop2floor(inventory[idx]);
	inventory[idx] = NULL;
}
void	Character::use(int idx, ICharacter& target)
{
	idx = (idx < 0)? -idx: idx; 
	if (inventory[idx % 4])
		inventory[idx % 4]->use(target);
	else
		std::cout << name << " use materia. No equipment in slot [" << idx % 4 << "]\n"<< *this;
}

std::ostream&	Character::print(std::ostream& out) const
{
	using std::endl;
	out << "--- Inventory character " << name << " ---" << endl;
	for(int i = 0; i < 4; i++)
		if (inventory[i])
			out << "slot["<< i << "] "<< inventory[i]->getType() << endl;
		else
			out << "slot["<< i << "] empty"<< endl;
	out <<"--- materia on the floor ---" <<endl;
	for (int i = 0; i < floorCount; i++)
		out << "["<< i << "] "<< floor[i]->getType() << endl;
	out <<"----------------------------" <<endl;
	return out;
}

std::ostream& operator << (std::ostream& out, const Character& val)
{
	return val.print(out);
}
