/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 19:07:13 by cyetta            #+#    #+#             */
/*   Updated: 2022/11/08 01:28:09 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include<exception>

template <class T>
class Array
{
private:
	T*	array;
	unsigned int	dim;
public:
	Array();
	Array(unsigned int _size);
	Array(const Array& val);
	T& operator= (const Array& val);
	T& operator[](const unsigned int idx);
	~Array();
	unsigned int	size() const;

	class OutOfRange : public std::exception {
	public:
		virtual const char* what() const throw();
	};
};


#include "Array.tpp"
#endif