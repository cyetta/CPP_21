/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:12:21 by cyetta            #+#    #+#             */
/*   Updated: 2022/10/25 17:31:14 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Default constructor Dog class, type is " << getType() << std::endl;
}

Dog::Dog(const Dog &val) : Animal(val.getType())
{
	std::cout << "Copy constructor Dog class, type is "<< getType() << std::endl;
}

Dog::~Dog()
{
	std::cout << "Default destructor Dog class, type is "<< getType() << std::endl;
}

Dog&	Dog::operator = (const Dog &val)
{
	if (this == &val)
		return *this;
	setType(val.getType());
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << getType() << " sound woof-woof"<< std::endl;
}