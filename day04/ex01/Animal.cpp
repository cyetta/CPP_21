/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:12:28 by cyetta            #+#    #+#             */
/*   Updated: 2022/10/25 17:31:17 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"

Animal::Animal(const std::string &name) : type(name)
{
	std::cout << "Default constructor Animal class, type is " << getType() << std::endl;
}

Animal::Animal(const Animal &val) : type(val.getType())
{
	std::cout << "Copy constructor Animal class, type is "<< val.getType() << std::endl;
}

Animal::~Animal()
{
	std::cout << "Default destructor Animal class, type is "<< getType() << std::endl;
}

Animal&	Animal::operator = (const Animal &val)
{
	if (this == &val)
		return *this;
	setType(val.getType());
	return *this;
}

const std::string&	Animal::getType() const
{
	return (type);
}

void 	Animal::setType(const std::string &val)
{
	type = val;
}

void	Animal::makeSound() const
{
	std::cout << type << " sound ???"<< std::endl;
}
