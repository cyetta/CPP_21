/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 02:38:36 by cyetta            #+#    #+#             */
/*   Updated: 2022/10/19 03:47:42 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	if (N <=0)
		return	NULL;
	Zombie	*Horde = new (std::nothrow) Zombie[N];
	if (Horde)
		for(int i = 0; i < N; i++)
			Horde[i].setName(name);
	else
		std::cout << "Memory allocation error..." << std::endl;
	return Horde;
}