/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 13:50:42 by cyetta            #+#    #+#             */
/*   Updated: 2022/10/19 14:49:49 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<string>

int	main(void)
{
	using std::cout; using std::endl;

	std::string	Brain("HI THIS IS BRAIN");
	std::string	*stringPTR;
	std::string	&stringREF = Brain;

	stringPTR = &Brain;
	cout << "Memory address of string Brain  is " << &Brain <<endl;
	cout << "Memory address of in *stringPTR is " << stringPTR <<endl;
	cout << "Memory address of in &stringREF is " << &stringREF <<endl <<endl;
	cout << "Value of string Brain  is " << Brain <<endl;
	cout << "Value of in *stringPTR is " << *stringPTR <<endl;
	cout << "Value of in &stringREF is " << stringREF <<endl;
}
