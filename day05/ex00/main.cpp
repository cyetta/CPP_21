/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 12:48:14 by cyetta            #+#    #+#             */
/*   Updated: 2022/10/28 19:14:43 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat noname;
	Bureaucrat bob("Bob", 2);
	try{
		std::cout << "--- create stiv with grade 0 ---" << std::endl;
		Bureaucrat stiv("Stiv", 0);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() <<std::endl << std::endl;
	}
	std::cout << "--- assignment stiv, other ---" << std::endl;
	Bureaucrat stiv("stiv");
	std::cout << stiv << std::endl;
	stiv = Bureaucrat("other", 149);
	std::cout << stiv << std::endl;
	std::cout<< noname <<std::endl;
	std::cout << bob << std::endl;

	try
	{
		std::cout << "--- degrade stiv ---" << std::endl;
		stiv.decGrade();
		std::cout << stiv << std::endl;
		std::cout << "--- degrade stiv ---" << std::endl;
		stiv.decGrade();
		std::cout << stiv << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() <<std::endl << std::endl;
	}
	std::cout << stiv << std::endl;

	try
	{
		std::cout << " --- upgrade bob ---" << std::endl;
		bob.incGrade();
		std::cout << bob << std::endl;
		std::cout << " --- upgrade bob ---" << std::endl;
		bob.incGrade();
		std::cout << bob << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() <<std::endl << std::endl;
	}
	std::cout << bob << std::endl;
	try
	{
		std::cout << "-- set noname grade 4221 --" << std::endl;
		noname.setGrade(4221);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl << std::endl;
	}
	try
	{
		std::cout << "-- set noname grade -1 --" << std::endl;
		noname.setGrade(-1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl << std::endl;
	}
	return 0;
}
