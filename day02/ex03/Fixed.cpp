/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 11:14:38 by cyetta            #+#    #+#             */
/*   Updated: 2022/10/22 01:31:28 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

Fixed::Fixed()
{
	value = 0;
}

Fixed::Fixed(const Fixed &value)
{
	*this = value;
}

Fixed::Fixed(const int val)
{
	value = val * (1 << fractionBit);
}

Fixed::Fixed(const float val)
{
	value = std::roundf(val * (1 << fractionBit));
}

Fixed::~Fixed()
{
}

const Fixed&	Fixed::operator=(const Fixed &value)
{
	if (this == &value)
		return *this;
	this->value = value.getRawBits();
	return *this;
}

int 	Fixed::getRawBits(void) const
{
	return(value);
}

void	Fixed::setRawBits(int const raw)
{
	value = raw;
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

// Comparison operators

bool	Fixed::operator > (const Fixed &val) const
{
	return this->getRawBits() > val.getRawBits();
}

bool	Fixed::operator <= (const Fixed &val) const
{
	return !(*this > val);
}

bool	Fixed::operator < (const Fixed &val) const
{
	return this->getRawBits() < val.getRawBits();
}

bool	Fixed::operator >= (const Fixed &val) const
{
	return !(*this < val);
}

bool	Fixed::operator == (const Fixed &val) const
{
	return this->getRawBits() == val.getRawBits();
}

bool	Fixed::operator != (const Fixed &val) const
{
	return !(*this == val);
}

// Math operators

Fixed	Fixed::operator + (const Fixed &val) const
{
	return Fixed(this->toFloat() + val.toFloat());
}

Fixed	Fixed::operator - (const Fixed &val) const
{
	return Fixed(this->toFloat() - val.toFloat());
}

Fixed	Fixed::operator * (const Fixed &val) const
{
	return Fixed(this->toFloat() * val.toFloat());
}

Fixed	Fixed::operator / (const Fixed &val) const
{
	return Fixed(this->toFloat() / val.toFloat());
}

// Increment, decrement

Fixed&	Fixed::operator ++ ()
{
	++value;
	return *this;
}

Fixed&	Fixed::operator -- ()
{
	--value;
	return *this;
}

Fixed	Fixed::operator ++ (int n)
{
	(void) n;
	Fixed t(*this);
	++(*this);
	return t;
}

Fixed	Fixed::operator -- (int n)
{
	(void) n;
	Fixed t(*this);
	--(*this);
	return t;
}

// Min, max function

Fixed&	Fixed::min(Fixed &v1, Fixed &v2)
{
	return (v1 > v2)? v2: v1;
}

const Fixed&	Fixed::min(const Fixed &v1, const Fixed &v2)
{
	return (v1 > v2)? v2: v1;
}

Fixed&	Fixed::max(Fixed &v1, Fixed &v2)
{
	return (v1 > v2)? v1: v2;
}

const Fixed&	Fixed::max(const Fixed &v1, const Fixed &v2)
{
	return (v1 > v2)? v1: v2;
}
