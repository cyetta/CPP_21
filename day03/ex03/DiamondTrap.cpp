/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 19:51:58 by cyetta            #+#    #+#             */
/*   Updated: 2022/10/24 18:45:23 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : 
	ClapTrap("_clap_name", 100, 50, 30), Name("")
{
	std::cout<<"DiamodTrap default constructor" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string &name) : 
	 ClapTrap(name + "_clap_name", 100, 50, 30), Name(name)
{
	std::cout<<"DiamodTrap constructor with name" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &val) :
	ClapTrap(val.getName(), val.getHP(), val.getEnergy(), val.getAttack()), Name(val.Name)
{
	std::cout<<"DiamodTrap copy constructor" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout<<"DiamodTrap default destructor" << std::endl;
}

DiamondTrap &DiamondTrap::operator = (const DiamondTrap &val)
{
	if (this == &val)
		return *this;
	Name = val.Name;
	setName(val.getName());
	setHP(val.getHP());
	setEnegy(val.getEnergy());
	setAttack(val.getAttack());
	return *this;
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap`s name: " << getName() << std::endl;
	std::cout << "ClapTrap`s name: " << ClapTrap::getName() << std::endl;
}

const std::string&	DiamondTrap::getName() const
{
	return Name;
}
