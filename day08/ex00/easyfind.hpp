/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 17:49:30 by cyetta            #+#    #+#             */
/*   Updated: 2022/11/08 21:31:20 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>
#include <stdexcept>

template <typename T>
typename T::const_iterator easyfind(const T& array, int val)
{
	typename T::const_iterator it;
	if (array.empty())
		throw std::range_error("Exception. Array is empty.");
	it = std::find(array.begin(), array.end(), val);
	if (it == array.end())
		throw std::runtime_error("Exception. Nothing found.");
	return it;
}

#endif