/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 11:14:38 by cyetta            #+#    #+#             */
/*   Updated: 2022/10/21 14:54:03 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" <<std::endl;
	value = 0;
}

Fixed::Fixed(const Fixed &value)
{
	std::cout << "Copy constructor called" <<std::endl;	
	this->value = value.getRawBits();
}

const Fixed&	Fixed::operator=(const Fixed &value)
{
	std::cout << "Copy assignment operator called" <<std::endl;	
	if (this == &value)
		return *this;
	this->value = value.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int 	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" <<std::endl;
	return(value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" <<std::endl;
	value = raw;
}
