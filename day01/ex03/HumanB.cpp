/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 16:24:33 by cyetta            #+#    #+#             */
/*   Updated: 2022/10/19 18:02:31 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanB.hpp"

HumanB::HumanB(const std::string &name)
{
	this->name = name;
	this->weapon = nullptr;
}

HumanB::~HumanB()
{
}


void	HumanB::attack()
{
	using std::cout; using std::endl;

	if (weapon)
		cout<<name << " attacks with their " << weapon->getType() <<endl;
	else
		cout<<name << " have not weapon. He is panic run out." <<endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}
