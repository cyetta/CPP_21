/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 18:34:26 by cyetta            #+#    #+#             */
/*   Updated: 2022/10/24 20:53:46 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"

int main(void)
{
	std::cout << "+--- default ---+" << std::endl;
	DiamondTrap	noname;
	noname.whoAmI();
	noname.highFivesGuys();
	noname.attack("something");
	noname.takeDamage(50);
	noname.beRepaired(25);
	std::cout << "+--- name ---+" << std::endl;
	DiamondTrap Dyson("Dyson");
	Dyson.whoAmI();
	Dyson.attack("something");
	Dyson.guardGate();
	std::cout << "+--- copy ---+" << std::endl;
	DiamondTrap	Dyson2(Dyson);
	Dyson2.whoAmI();
	Dyson2.attack("somthing");
	std::cout << "+--- reference ---+" << std::endl;
	DiamondTrap &ref = noname;
	ref.whoAmI();
	ref.attack("something");
	std::cout << "+--- pointer ---+" << std::endl;
	DiamondTrap *pntBob = new DiamondTrap("pntBob");
	pntBob->whoAmI();
	pntBob->attack("something");
	pntBob->takeDamage(5);
	delete pntBob;
	std::cout << "+--- the end ---+" << std::endl;
	return 0;
}
