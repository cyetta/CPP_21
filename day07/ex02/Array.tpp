/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 23:07:21 by cyetta            #+#    #+#             */
/*   Updated: 2022/11/08 01:34:45 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array() : array(new T[0]), dim(0)
{}

template <typename T>
Array<T>::Array(unsigned int _size) : array(new T[_size]), dim(_size)
{}

template <typename T>
Array<T>::Array(const Array& val): array(new T[val.dim]), dim(val.dim)
{
	for(unsigned int i = 0; i < dim; i++)
		array[i] = val.array[i];
}

template <typename T>
T& Array<T>::operator= (const Array& val)
{
	if(this == &val)
		return *this;
	delete [] array;
	dim = val.dim;
	array = new T[dim];
	for(unsigned int i = 0; i < dim; i++)
		array[i] = val.array[i];
	return *this;
}

template <typename T>
T& Array<T>::operator[] (const unsigned int idx)
{
	if (idx >= dim)
		throw OutOfRange();
	return array[idx];
}

template <typename T>
Array<T>::~Array()
{
	delete [] array;
}

template <typename T>
unsigned int	Array<T>::size() const
{	return dim;
}

template <typename T>
const char* Array<T>::OutOfRange::what() const throw()
{
	return "Index out of range.";
}