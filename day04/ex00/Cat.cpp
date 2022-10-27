/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:02:33 by cyetta            #+#    #+#             */
/*   Updated: 2022/10/25 17:30:20 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Default constructor Cat class, type is " << getType() << std::endl;
}

Cat::Cat(const Cat &val) : Animal(val.getType())
{
	std::cout << "Copy constructor Cat class, type is "<< getType() << std::endl;
}

Cat::~Cat()
{
	std::cout << "Default destructor Cat class, type is "<< type << std::endl;
}

Cat&	Cat::operator = (const Cat &val)
{
	if (this == &val)
		return *this;
	setType(val.getType());
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << getType() << " sound meow-meow"<< std::endl;
}