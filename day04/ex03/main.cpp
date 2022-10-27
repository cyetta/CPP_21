/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:04:26 by cyetta            #+#    #+#             */
/*   Updated: 2022/10/27 20:42:24 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main(void)
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	std::cout << *(dynamic_cast<Character*>(me));
	ICharacter* bob = new Character("bob");
	
	std::cout << std::endl;
	me->use(0, *bob);
	me->use(1, *bob);
	
	std::cout << std::endl;
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	me->unequip(0);
	me->unequip(1);
	std::cout << "\n"<< *(dynamic_cast<Character*>(me));

	me->unequip(2);
	me->unequip(3);
	me->equip(tmp);
	std::cout << "\n"<< *(dynamic_cast<Character*>(me));

	std::cout<< "\n--- Bob unequip ---"<<std::endl;
	bob->unequip(1);
	bob->use(2, *bob);

	std::cout<< "\n--- me copy & assignment---"<<std::endl;
	*(dynamic_cast<Character*>(bob)) = *(dynamic_cast<Character*>(me));
	std::cout << "\n"<< *(dynamic_cast<Character*>(bob));
	
	ICharacter* ted = new Character(*(dynamic_cast<Character*>(bob)));
	std::cout << "\n"<< *(dynamic_cast<Character*>(ted));

	delete bob;
	delete me;
	delete ted;
	delete src;
	return 0;

}
