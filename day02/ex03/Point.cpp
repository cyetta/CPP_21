/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 20:39:44 by cyetta            #+#    #+#             */
/*   Updated: 2022/10/22 12:17:06 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ostream>
#include "Point.hpp"

Point::Point() : x(0) , y(0)
{
}

Point::Point(const Point& pnt)
{
	*this = pnt;
}

Point::Point(const float& _x, const float& _y) : x(_x), y(_y)
{
}

Point::~Point()
{
}

const Point& Point::operator = (const Point &pnt)
{
	if (this == &pnt)
		return *this;
	x = pnt.getX();
	y = pnt.getY();
	return *this;
}

const Fixed&	Point::getX() const
{
	return x;
}

const Fixed&	Point::getY() const
{
	return y;
}

void	Point::setX(const Fixed& val)
{
	x = val;
}

void	Point::setY(const Fixed& val)
{
	y = val;
}

std::ostream& operator<< (std::ostream &ostrm, const Point &val)
{
	ostrm <<"(" <<val.getX() <<"," << val.getY() <<")";
	return ostrm;
}