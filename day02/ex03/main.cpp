/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 02:00:27 by cyetta            #+#    #+#             */
/*   Updated: 2022/10/22 13:28:18 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int	main(void)
{
	Point a, b(0, 10), c(10.0, 0.0), d;
	d.setX(10);
	d.setY(10);

	if (bsp(a, b, c, d))
		std::cout<< "Point"<< d<< " belongs to the triangle"<< a<< b<< c<< std::endl;
	else
		std::cout<< "Point"<< d<< " outside the triangle"<< a<< b<< c<< std::endl;
	d.setX(2);
	d.setY(2);

	if (bsp(a, b, c, d))
		std::cout<< "Point"<< d<< " belongs to the triangle"<< a<< b<< c<< std::endl;
	else
		std::cout<< "Point"<< d<< " outside the triangle"<< a<< b<< c<< std::endl;

	return 0;
}