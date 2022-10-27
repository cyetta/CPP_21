/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:04:26 by cyetta            #+#    #+#             */
/*   Updated: 2022/10/25 18:40:51 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();


	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();


	delete meta;
	delete j;
	delete i;
	
	std::cout << "---- wrong ---" << std::endl;
	WrongCat	wc;
	wc.makeSound();
	WrongAnimal	*wa = new WrongCat();
	wa->makeSound();
	delete wa;
	return 0;
}
