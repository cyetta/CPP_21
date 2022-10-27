/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:02:33 by cyetta            #+#    #+#             */
/*   Updated: 2022/10/25 20:59:27 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Brain.hpp"
#include "Cat.hpp"

Cat::Cat() : Animal("Cat"), brain(new Brain())
{
	std::cout << "Default constructor Cat class, type is " << getType() << std::endl;
}

Cat::Cat(const Cat &val) : Animal(val.getType()), brain(new Brain(*val.brain))
{
	std::cout << "Copy constructor Cat class, type is "<< getType() << std::endl;
}

Cat::~Cat()
{
	std::cout << "Default destructor Cat class, type is "<< type << std::endl;
	delete brain;
}

Cat&	Cat::operator = (const Cat &val)
{
	if (this == &val)
		return *this;
	setType(val.getType());
	*this->brain = *val.brain;
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << getType() << " sound meow-meow"<< std::endl;
}

const std::string& Cat::getIdea(const unsigned int i) const
{
	return brain->getIdea(i);
}

void Cat::setIdea(const std::string &str, const unsigned int i)
{
	brain->setIdea(str, i);
}
