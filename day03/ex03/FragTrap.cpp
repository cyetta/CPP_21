/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 14:22:17 by cyetta            #+#    #+#             */
/*   Updated: 2022/10/24 20:53:29 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("", 100, 100, 30)
{
	std::cout<<"FragTrap default constructor" << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name, 100, 100, 30)
{
	std::cout<<"FragTrap default constructor with Name" << std::endl;
}

FragTrap::FragTrap(const std::string &name, int hp, int energy, int attack) :
	ClapTrap(name, hp, energy, attack)
{
	std::cout<<"FragTrap default constructor with all parameters" << std::endl;
}

FragTrap::FragTrap(const FragTrap &val) : ClapTrap(val)
{
	std::cout<<"FragTrap copy constructor" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor FragTrap" << std::endl;
}

const FragTrap& FragTrap::operator = (const FragTrap &val)
{
	if (this == &val)
		return *this;
	setName(val.getName());
	setHP(val.getHP());
	setEnegy(val.getEnergy());
	setAttack(val.getAttack());
	return *this;
}

void FragTrap::highFivesGuys()
{
	std::cout<<"FragTrap "<< this->getName() << " says, \"High five, bro!\"" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
	if (getHP() > 0 &&  getEnergy() > 0)
	{
		setEnegy(getEnergy() - 1);
		std::cout << "FragTrap "<< getName() << " attacks " << target;
		std::cout <<", causing " << getAttack() <<" points of damage!" <<std::endl;
	}
	else
		std::cout << "FragTrap "<< getName() << " has no energy or HP left to do anything." << std::endl;
	std::cout<< getName() <<"'s health is "<< getHP() << "HP\t"<< "energy is "<< getEnergy() << " point"<<std::endl;
	std::cout<< "-----------------" <<std::endl;
}