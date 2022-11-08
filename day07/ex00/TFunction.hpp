/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TFunction.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 15:04:08 by cyetta            #+#    #+#             */
/*   Updated: 2022/11/05 15:27:35 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
void swap(T& a, T& b)
{
	T	temp;
	temp = a;
	a = b;
	b = temp;
}

template <typename T>
const T& min(const T& a, const T& b)
{
	return (a < b)? a: b;
}

template <typename T>
const T& max(const T& a, const T& b)
{
		return (a > b)? a: b;
}
