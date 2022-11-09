/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 17:46:11 by cyetta            #+#    #+#             */
/*   Updated: 2022/11/08 22:00:36 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <iterator>
#include "easyfind.hpp"

int	main(void)
{
	std::vector<int> a;
	std::vector<int>::const_iterator cit;
	
	try{
		cit = easyfind(a, 5);}
	catch(std::exception& err){
		std::cerr << "find 5 in vector a: " <<err.what() <<std::endl;
	}
	for(int i = 0; i < 10; i++)
		a.push_back(i * 3);

	try{
		cit = easyfind(a, 5);
		std::cout << "found " << *cit  << " at " << std::distance(a.cbegin(), cit)<< std::endl;
	}
	catch(std::exception& err){
		std::cerr << "Search 5 in vector a: " <<err.what() <<std::endl;
	}

	try{
		cit = easyfind(a, 15);
		std::cout << "found " << *cit  << " at " << std::distance(a.cbegin(), cit)<< std::endl;
	}
	catch(std::exception& err){
		std::cerr << "Search 15 in vector a: " <<err.what() <<std::endl;
	}
	return 0;
}