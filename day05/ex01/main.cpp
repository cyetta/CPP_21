/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 12:48:14 by cyetta            #+#    #+#             */
/*   Updated: 2022/10/31 14:42:26 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	
	Bureaucrat non;
	Bureaucrat bob("Bob", 2);

	Form	anon;
	Form	bnon;
	Form	b52("B52", 10, 15);
	try	{
		Form	err1("B53", 1000, 15);}
	catch(const std::exception& e)	{
		std::cerr << e.what() << '\n';
	}
	try	{
		Form	err2("B54", 10, 1500);}
	catch(const std::exception& e)	{
		std::cerr << e.what() << '\n';
	}
	try	{
		Form	err3("B55", 0, 15);	}
	catch(const std::exception& e)	{
		std::cerr << e.what() << '\n';
	}
	try	{
		Form	err4("B56", 10, 0);}
	catch(const std::exception& e)	{
		std::cerr << e.what() << '\n';
	}

	Form	b52copy(b52);
	std::cout <<anon <<std::endl <<bnon <<std::endl <<b52 <<std::endl <<b52copy <<std::endl <<non <<std::endl <<bob <<std::endl;

	non.signForm(anon);
	bob.signForm(bnon);
	bob.signForm(b52);
	bob.incGrade();
	bob.signForm(anon);

	std::cout <<std::endl <<anon <<std::endl <<bnon <<std::endl <<b52 <<std::endl <<b52copy <<std::endl;
	std::cout << "--- b52 copy ---" <<std::endl;
	b52 = b52copy;
	std::cout <<anon <<std::endl <<bnon <<std::endl <<b52 <<std::endl <<b52copy <<std::endl;

	return 0;
}

