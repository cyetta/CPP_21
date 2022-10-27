/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:04:26 by cyetta            #+#    #+#             */
/*   Updated: 2022/10/25 21:37:16 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include "Cat.hpp"
#include "Dog.hpp"


int main(void)
{
	Cat	alice;
	alice.setIdea("duplicate me\n", 1);
	alice.makeSound();
	std::cout << alice.getIdea(1) <<std::endl;

	Cat	*barsik = new Cat(alice);
	barsik->makeSound();
	std::cout << barsik->getIdea(1) <<std::endl;
	delete barsik;
	std::cout << "---- barsik deleted ----" <<std::endl;

	Dog basic;
	basic.setIdea("duplicate me\n", 1);
	{
		Dog rex = basic;
		rex.makeSound();
		std::cout << rex.getIdea(1) <<std::endl;
	}
	std::cout << "---- rex out of scope ----" <<std::endl;
	std::cout << "---- reference polymorphism ----" <<std::endl;

	Animal &rA = alice;
	Animal &rB = basic;

	rA.makeSound();
	rB.makeSound();

	std::cout << "---- pointer polymorphism ----" <<std::endl;
	Animal *pCat = new Cat();
	Animal *pDog = new Dog();
	pCat->makeSound();
	pDog->makeSound();
	std::cout << "---- deleted Animal pointer. view leaks----" <<std::endl;
	delete pCat;
	delete pDog;
	std::cout << "---- next delete automatic variable----" <<std::endl;

}
