/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:12:28 by cyetta            #+#    #+#             */
/*   Updated: 2022/10/25 17:42:13 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(const std::string &name) : type(name)
{
	std::cout << "Default constructor WrongAnimal class, type is " << getType() << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &val) : type(val.getType())
{
	std::cout << "Copy constructor WrongAnimal class, type is "<< val.getType() << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Default destructor WrongAnimal class, type is "<< getType() << std::endl;
}

WrongAnimal&	WrongAnimal::operator = (const WrongAnimal &val)
{
	if (this == &val)
		return *this;
	setType(val.getType());
	return *this;
}

const std::string&	WrongAnimal::getType() const
{
	return (type);
}

void 	WrongAnimal::setType(const std::string &val)
{
	type = val;
}

void	WrongAnimal::makeSound() const
{
	std::cout << type << " sound ???"<< std::endl;
}
