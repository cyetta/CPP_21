/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 20:39:40 by cyetta            #+#    #+#             */
/*   Updated: 2022/10/22 12:17:07 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP
# include "Fixed.hpp"

class Point
{
private:
	Fixed	x;
	Fixed	y;
public:
	Point();
	Point(const Point& pnt);
	Point(const float& _x, const float& _y);
	~Point();
	const Point& operator = (const Point &pnt);
	const Fixed&	getX() const;
	const Fixed&	getY() const;
	void	setX(const Fixed& val);
	void	setY(const Fixed& val);
};

std::ostream& operator<< (std::ostream &ostrm, const Point &val);
#endif