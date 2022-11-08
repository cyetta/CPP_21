/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 19:52:36 by cyetta            #+#    #+#             */
/*   Updated: 2022/11/05 18:48:25 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

void print(int* val)
{
	std::cout << *val << std::endl;
}

void print(std::string* str)
{
	std::cout << *str << std::endl;
}

int main(void)
{
	int a[]={1,2,3,4,5,6};
	std::string str[]={"one","two","three","four","five"};
	
	iter(a, sizeof(a)/sizeof(int), print);
	iter(str, 5, print);
}