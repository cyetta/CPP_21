/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 17:46:11 by cyetta            #+#    #+#             */
/*   Updated: 2022/11/09 14:05:46 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Span.hpp"

int	main(void)
{
	std::srand(std::time(NULL));
	
	Span sp = Span(5);
	try{
		std::cout << sp <<std::endl;
	}
	catch(const std::exception& e){
		std::cerr << e.what() << '\n';
	}
	sp.addNumber(16);
	try{
		std::cout<< "Longest  span:" << sp.longestSpan()<<std::endl;
	}
	catch(const std::exception& e){
		std::cerr << e.what() << '\n';
	}
	sp.addNumber(9);
	sp.addNumber(17);
	sp.addNumber(11);
	sp.addNumber(3);
	try{
		sp.addNumber(42);
	}
	catch(const std::exception& e){
		std::cerr << e.what() << std::endl;
	}
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	
	Span	a(10500);
	for (int i = 0; i < 10600; i++)
	{
		try{
			a.addNumber(std::rand()%125000000);
		}
		catch(const std::exception& e){
			std::cerr << e.what() << std::endl;
			break;
		}
	}
	std::cout << a <<std::endl;
}
