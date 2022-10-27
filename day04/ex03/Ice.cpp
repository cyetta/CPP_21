/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:48:11 by cyetta            #+#    #+#             */
/*   Updated: 2022/10/26 19:21:40 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Ice.hpp"

Ice::Ice(std::string const &type) : AMateria(type)
{
}

Ice::Ice(const Ice &val) : AMateria(val.materiaType)
{
}

Ice::~Ice()
{
}

Ice& Ice::operator = (const Ice& val)
{
	if(this == &val)
		return *this;
	this->materiaType = val.materiaType;
	return *this;
}

AMateria* Ice::clone() const
{
	return new Ice();
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at ";
	AMateria::use(target);
	std::cout <<" *" << std::endl;
}