/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 02:00:27 by cyetta            #+#    #+#             */
/*   Updated: 2022/10/19 02:11:05 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	Freddi("Freddi");
	Zombie	*Stiven;

	Freddi.announce();
	Stiven = newZombie("Stiven");
	Stiven->announce();
	randomChump("Margo");
	delete Stiven;
	return 0;
}