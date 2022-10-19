/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 16:02:03 by cyetta            #+#    #+#             */
/*   Updated: 2022/10/19 16:08:10 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string &type)
{
	this->type = type;
}

Weapon::~Weapon()
{
}

void	Weapon::setType(const std::string &WeaponType)
{
	type = WeaponType;
}

const std::string	&Weapon::getType()
{
	return type;
}