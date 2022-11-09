/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 22:07:48 by cyetta            #+#    #+#             */
/*   Updated: 2022/11/09 13:52:20 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <stdexcept>
#include <algorithm>

Span::Span(unsigned int size) : _size(size)
{}

Span::Span(const Span& val) : _size(val._size)
{}

Span& Span::operator= (const Span& val)
{
	if (this == &val)
		return *this;
	_size = val._size;
	array = val.array;
	return *this;
}

Span::~Span()
{}

int	Span::getSize() const
{
	return _size;
}

void	Span::print()
{
	std::cout << "Size limit:" << _size << "\n";
	for (iterator it = array.begin() ; it != array.end() ; it++)
		std::cout << *it << "\t";
	std::cout << std::endl;
}


void Span::addNumber(int val)
{
	if (array.size() == _size)
		throw std::length_error("Array size limit reached.");
	array.push_back(val);
}

int	Span::shortestSpan()
{
	if (array.size() < 2)
		throw std::logic_error("No enougth element for find span");
	std::sort(array.begin(), array.end());
	int ret = (array[1] - array[0]);
	for (iterator it = (array.begin() + 1); it != (array.end() - 1) && ret !=0 ; it++)
		if ((*(it + 1) - *it) < ret)
			ret = *(it + 1) - *it;
	return ret;
}

int Span::longestSpan()
{
	if (array.size() < 2)
		throw std::logic_error("No enougth element for find span");
	iterator imin = std::min_element(array.begin(), array.end());
	iterator imax = std::max_element(array.begin(), array.end());
	return (*imax - *imin);
}

std::ostream& operator<< (std::ostream &out, Span &val)
{
	out<< "Size limit:" << val.getSize() << "\nShortest span:" << val.shortestSpan();
	out<< "\nLongest  span:" << val.longestSpan()<<std::endl;
 	return out;
}