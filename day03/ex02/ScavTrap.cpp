/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 14:22:17 by cyetta            #+#    #+#             */
/*   Updated: 2022/10/24 20:54:46 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("", 100, 50, 20)
{
	std::cout<<"ScavTrap default constructor" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name, 100, 50, 20)
{
	std::cout<<"ScavTrap default constructor with Name" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name, int hp, int energy, int attack) :
	ClapTrap(name, hp, energy, attack)
{
	std::cout<<"ScavTrap default constructor with all parameters" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &val) : ClapTrap(val)
{
	std::cout<<"ScavTrap copy constructor" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor ScavTrap" << std::endl;
}

const ScavTrap& ScavTrap::operator = (const ScavTrap &val)
{
	if (this == &val)
		return *this;
	setName(val.getName());
	setHP(val.getHP());
	setEnegy(val.getEnergy());
	setAttack(val.getAttack());
	return *this;
}

void ScavTrap::guardGate()
{
	std::cout<<"ScavTrap "<< this->getName() << " is now in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (getHP() > 0 &&  getEnergy() > 0)
	{
		setEnegy(getEnergy() - 1);
		std::cout << "ScavTrap "<< getName() << " attacks " << target;
		std::cout <<", causing " << getAttack() <<" points of damage!" <<std::endl;
	}
	else
		std::cout << "ScavTrap "<< getName() << " has no energy or HP left to do anything." << std::endl;
	std::cout<< getName() <<"'s health is "<< getHP() << "HP\t"<< "energy is "<< getEnergy() << " point"<<std::endl;
	std::cout<< "-----------------" <<std::endl;
}