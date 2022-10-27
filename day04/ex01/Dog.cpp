/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:12:21 by cyetta            #+#    #+#             */
/*   Updated: 2022/10/25 21:00:07 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Brain.hpp"
#include "Dog.hpp"

Dog::Dog() : Animal("Dog"), brain(new Brain())
{
	std::cout << "Default constructor Dog class, type is " << getType() << std::endl;
}

Dog::Dog(const Dog &val) : Animal(val.getType()), brain(new Brain(*val.brain))
{
	std::cout << "Copy constructor Dog class, type is "<< getType() << std::endl;
}

Dog::~Dog()
{
	std::cout << "Default destructor Dog class, type is "<< getType() << std::endl;
		delete brain;
}

Dog&	Dog::operator = (const Dog &val)
{
	if (this == &val)
		return *this;
	setType(val.getType());
	*this->brain = *val.brain;
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << getType() << " sound woof-woof"<< std::endl;
}

const std::string& Dog::getIdea(const unsigned int i) const
{
	return brain->getIdea(i);
}

void Dog::setIdea(const std::string &str, const unsigned int i)
{
	brain->setIdea(str, i);
}
