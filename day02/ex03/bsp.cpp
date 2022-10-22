/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 20:40:33 by cyetta            #+#    #+#             */
/*   Updated: 2022/10/22 13:10:02 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"
#include "Fixed.hpp"

Fixed	side(const Point& p1, const Point& p2, const Point& p)
{
	Fixed res = (p1.getX() - p.getX()) * (p2.getY() - p1.getY()) - \
(p2.getX() - p1.getX()) * (p1.getY() - p.getY());
	return res;
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{

	Fixed sideA(side(a, b, point));
	Fixed sideB(side(b, c, point));
	Fixed sideC(side(c, a, point));
	
	if ((sideA > Fixed(0) && sideB > Fixed(0) && sideC > Fixed(0)) || 
	(sideA < Fixed(0) && sideB < Fixed(0) && sideC < Fixed(0)))
		return true;
	else if (sideA == Fixed(0) || sideB == Fixed(0) || sideC == Fixed(0))
		return true;
	return false;
}
