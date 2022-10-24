/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 18:35:19 by cyetta            #+#    #+#             */
/*   Updated: 2022/10/23 17:10:30 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : Name(""), HitPoint(10), Energy(10), Attack(0)
{
	std::cout<<"Default constructor" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name) :
	Name(name),  HitPoint(10), Energy(10), Attack(0)
{
	std::cout<<"Constructor with name and default" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name, int hp, int energy, int attack) :
	Name(name),  HitPoint(hp), Energy(energy), Attack(attack)
{
	std::cout<<"Default constructor with all params" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &val) :
	Name(val.getName()),  HitPoint(val.getHP()), Energy(val.getEnergy()), Attack(val.getAttack())
{
	std::cout<<"Copy constructor" << std::endl;
}

const ClapTrap& ClapTrap::operator = (const ClapTrap& val)
{
	if (this == &val)
		return *this;
	Name = val.getName();
	HitPoint = val.getHP();
	Energy = val.getEnergy();
	Attack = val.getAttack();
	return *this;
}

ClapTrap::~ClapTrap()
{
		std::cout << "Destructor ClapTrap" << std::endl;
}

const std::string&	ClapTrap::getName() const
{
	return Name;
}
int	ClapTrap::getHP() const
{
	return HitPoint;
}
int	ClapTrap::getEnergy() const
{
	return Energy;
}
int	ClapTrap::getAttack() const
{
	return Attack;
}
void	ClapTrap::ClapTrap::setName(const std::string name)
{
	Name = name;
}
void	ClapTrap::setHP(const int hp)
{
	HitPoint = (hp < 0)? 0 : hp;
}
void	ClapTrap::setEnegy(const int energy)
{
	Energy = (energy < 0)? 0 : energy;
}
void	ClapTrap::setAttack(const int attack)
{
	Attack = attack;
}

void	ClapTrap::attack(const std::string& target)
{
	if (HitPoint > 0 &&  Energy > 0)
	{
		setEnegy(Energy - 1);
		std::cout << "ClapTrap "<< Name << " attacks " << target;
		std::cout <<", causing " << Attack <<" points of damage!" <<std::endl;
	}
	else
		std::cout << "ClapTrap "<< Name<< " has no energy or HP left to do anything." << std::endl;
	std::cout<< Name <<"'s health is "<< HitPoint<< "HP\t"<< "energy is "<< Energy<< " point"<<std::endl;
	std::cout<< "-----------------" <<std::endl;

}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (HitPoint > 0)
	{
		setHP(HitPoint - amount);
		std::cout<< "ClapTrap "<< Name<< " takes "<< amount<< "HP damage"<<std::endl;
	}
	else
		std::cout<< "ClapTrap "<< Name<< " is already dead. Show some respect for the dead body."<<std::endl;
	std::cout<< "Health is "<< HitPoint<< "HP\t"<< "Energy is "<< Energy<< " point"<<std::endl;
	std::cout<< "-----------------" <<std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (HitPoint > 0 &&  Energy > 0)
	{
		setEnegy(Energy - 1);
		setHP(HitPoint + amount);
		std::cout << "ClapTrap "<< Name << " repairs " << amount << " HP" << std::endl;
	}
	else
		std::cout<< "ClapTrap "<< Name<< " has no energy or HP left to do anything." << std::endl;
	std::cout<< "Health is "<< HitPoint<< "HP\t"<< "Energy is "<< Energy<< " point"<<std::endl;
	std::cout<< "-----------------" <<std::endl;
}