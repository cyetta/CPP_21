/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 18:34:26 by cyetta            #+#    #+#             */
/*   Updated: 2022/10/23 19:22:04 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	ClapTrap Joy("Joy");
	ScavTrap Bob("Bob");
	FragTrap Sam("Sam");

	Joy.attack(Sam.getName());
	Sam.takeDamage(Joy.getAttack());
	Sam.attack(Joy.getName());
	Joy.takeDamage(Sam.getAttack());
	Bob.guardGate();
	Bob.attack("Something");
	Bob.takeDamage(42);
	Bob.beRepaired(21);
	Sam.attack(Bob.getName());
	Bob.takeDamage(Sam.getAttack());
	Sam.highFivesGuys();
	return 0;
}
