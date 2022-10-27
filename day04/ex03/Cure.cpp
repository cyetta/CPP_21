/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 18:22:10 by cyetta            #+#    #+#             */
/*   Updated: 2022/10/27 17:47:24 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cure.hpp"

Cure::Cure(std::string const &type) : AMateria(type)
{
}

Cure::Cure(const Cure &val) : AMateria(val.materiaType)
{
}

Cure::~Cure()
{
}

Cure& Cure::operator = (const Cure& val)
{
	if(this == &val)
		return *this;
	this->materiaType = val.materiaType;
	return *this;
}

AMateria* Cure::clone() const
{
	return new Cure();
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals "<< target.getName() <<"’s wounds *" << std::endl;
}