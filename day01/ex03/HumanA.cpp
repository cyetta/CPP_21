/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 16:09:09 by cyetta            #+#    #+#             */
/*   Updated: 2022/10/19 19:31:00 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanA.hpp"

HumanA::HumanA(const std::string &name, Weapon &_weapon) :weapon(_weapon)
{
	this->name = name;
}

HumanA::~HumanA()
{
}

void	HumanA::attack()
{
	using std::cout; using std::endl;

	cout<<name << " attacks with their " << weapon.getType() <<endl;
}