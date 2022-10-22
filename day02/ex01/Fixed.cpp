/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 11:14:38 by cyetta            #+#    #+#             */
/*   Updated: 2022/10/21 17:44:20 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<cmath>
#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" <<std::endl;
	value = 0;
}

Fixed::Fixed(const Fixed &value)
{
	std::cout << "Copy constructor called" <<std::endl;	
	*this = value;
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
	return(value);
}

void	Fixed::setRawBits(int const raw)
{
	value = raw;
}

Fixed::Fixed(const int val)
{
	std::cout << "Int constructor called" <<std::endl;	
	value = val * (1 << fractionBit);
}

Fixed::Fixed(const float val)
{
	std::cout << "Float constructor called" <<std::endl;
	value = std::roundf(val * (1 << fractionBit));
}

float	Fixed::toFloat( void ) const
{
	return (float)value / float(1 << fractionBit);
}

int		Fixed::toInt( void ) const
{
	return value / (1 << fractionBit);
}

std::ostream& operator<< (std::ostream &ostrm, const Fixed &val)
{
	ostrm << val.toFloat();
	return ostrm;
}
