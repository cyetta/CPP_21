/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 16:02:58 by cyetta            #+#    #+#             */
/*   Updated: 2022/11/05 18:07:25 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
void	iter(T* array, unsigned int size, void (*f)(T*))
{
	if (!array)
		return;
	for(unsigned int i = 0; i < size; i++)
		f(&array[i]);
}