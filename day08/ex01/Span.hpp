/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 22:08:00 by cyetta            #+#    #+#             */
/*   Updated: 2022/11/09 13:05:43 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP
#include <vector>
#include <ostream>

class Span
{
private:
	typedef std::vector<int>::iterator iterator;
	
	unsigned int	_size;
	std::vector<int>	array;
	
public:
	Span(unsigned int size = 0);
	Span(const Span& val);
	Span& operator= (const Span& val);
	~Span();
	int	getSize() const;
	void	print();
	void addNumber(int val);
	int	shortestSpan();
	int longestSpan();
};

std::ostream& operator<< (std::ostream &out, Span &val);

#endif