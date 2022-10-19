/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 02:00:27 by cyetta            #+#    #+#             */
/*   Updated: 2022/10/19 03:52:51 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	const int	ZombieQuntity = 5;
	Zombie	*Horde = zombieHorde(ZombieQuntity, "Smith");

	for(int i = 0; i < ZombieQuntity; i++)
		Horde[i].announce();
	delete [] Horde;
	return 0;
}