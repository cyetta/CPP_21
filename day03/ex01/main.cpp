/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 18:34:26 by cyetta            #+#    #+#             */
/*   Updated: 2022/10/23 18:45:39 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap Joy;
	ClapTrap Ted(Joy);
	ClapTrap Jim("Jim");

	Joy.setName("Joy");
	Ted.setName("Ted");
	Jim.setAttack(5);
	
	Jim.attack(Joy.getName());
	Joy.takeDamage(Jim.getAttack());
	Joy.attack(Ted.getName());
	Ted.takeDamage(Joy.getAttack());
	Joy.beRepaired(1);
	Jim.attack(Ted.getName());
	Ted.takeDamage(Jim.getAttack());
	Ted.setAttack(4);
	Ted.attack(Jim.getName());
	Jim.takeDamage(Ted.getAttack());
	Ted.attack(Jim.getName());
	Jim.takeDamage(Ted.getAttack());
	Jim.beRepaired(3);
	Ted.attack(Jim.getName());
	Jim.takeDamage(Ted.getAttack());
	Ted.attack(Jim.getName());
	Jim.takeDamage(Ted.getAttack());
	Jim.beRepaired(1);
	Joy.attack(Jim.getName());
	Jim.takeDamage(Joy.getAttack());
	Joy.attack(Ted.getName());
	Ted.takeDamage(Joy.getAttack());
	Joy.attack(Ted.getName());
	Ted.takeDamage(Joy.getAttack());
	Joy.attack(Ted.getName());
	Ted.takeDamage(Joy.getAttack());
	Joy.attack(Ted.getName());
	Ted.takeDamage(Joy.getAttack());
	Joy.attack(Ted.getName());
	Ted.takeDamage(Joy.getAttack());
	Joy.attack(Ted.getName());
	Ted.takeDamage(Joy.getAttack());
	Joy.attack(Ted.getName());
	Ted.takeDamage(Joy.getAttack());
	Joy.attack(Ted.getName());
	Ted.takeDamage(Joy.getAttack());
	ScavTrap Bob("Bob");
	Bob.guardGate();
	Ted.attack(Bob.getName());
	Bob.takeDamage(Ted.getAttack());
	Bob.attack(Ted.getName());
	Ted.takeDamage(Bob.getAttack());
	Bob.takeDamage(40);
	Bob.beRepaired(20);
	return 0;
}
