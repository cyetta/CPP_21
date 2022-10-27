/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:47:51 by cyetta            #+#    #+#             */
/*   Updated: 2022/10/26 19:10:32 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string>
#include<iostream>
#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : materiaType(type)
{
}

AMateria::AMateria(const AMateria &val) : materiaType(val.materiaType)
{}

AMateria::~AMateria()
{
}

AMateria& AMateria::operator= (const AMateria& val)
{
	if (this == &val)
		return *this;
	materiaType = val.materiaType;
	return *this;
}

std::string const & AMateria::getType() const
{
	return materiaType;
}

void AMateria::use(ICharacter& target)
{
	std::cout << target.getName();
}