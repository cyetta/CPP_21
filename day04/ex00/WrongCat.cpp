/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:02:33 by cyetta            #+#    #+#             */
/*   Updated: 2022/10/25 17:30:20 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "Default constructor WrongCat class, type is " << getType() << std::endl;
}

WrongCat::WrongCat(const WrongCat &val) : WrongAnimal(val.getType())
{
	std::cout << "Copy constructor WrongCat class, type is "<< getType() << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "Default destructor WrongCat class, type is "<< type << std::endl;
}

WrongCat&	WrongCat::operator = (const WrongCat &val)
{
	if (this == &val)
		return *this;
	setType(val.getType());
	return *this;
}

void	WrongCat::makeSound() const
{
	std::cout << getType() << " sound meow-meow"<< std::endl;
}