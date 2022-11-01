/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 12:48:14 by cyetta            #+#    #+#             */
/*   Updated: 2022/11/01 17:10:22 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

void	SignAndExecute(Bureaucrat *dep, Form& form)
{
	int	i;
		
	std::cout << "---- Try to sign form ------\n" << form << "----------"<< std::endl;
	for(i = 0; i<5; i++)
	{
		dep[i].signForm(form);
		std::cout << dep[i]<< std::endl<< std::endl;
		if (form.getSign())
			break;
	}
	if (i==5)
	{
		std::cout << "Department bureaucrats can't sign the form " << form.getName() <<std ::endl;
		return ;
	}
	std::cout << "---- Try to execute form ------\n" << form << "----------";
	for(int i = 0; i<5; i++)
	{
		try	{
			std::cout << std::endl << dep[i]<< std::endl;
			dep[i].executeForm(form);
			std::cout << std::endl;
			break;}
		catch(const std::exception& e){
			continue;
		}
	}
	if (i==5)
	{
		std::cout << "Department bureaucrats can't execute the form " << form.getName() <<std ::endl;
		return ;
	}

}

int main(void)
{
	Bureaucrat	depA[] = {Bureaucrat(), Bureaucrat("Siril", 140), Bureaucrat("John", 72), \
		Bureaucrat("Marly", 25), Bureaucrat("Bob", 5)};
	
	Intern	someIntern;
	Form *pnt;
	try
	{
		std::cout << "Intern try to create PresidentialPardonForm" << std::endl;
		pnt = someIntern.makeForm("PresidentialPardonForm","Silvestr");
		SignAndExecute(depA, *pnt);
		delete pnt;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << "Intern try to create RobotomyRequestForm" << std::endl;
		pnt = someIntern.makeForm("RobotomyRequestForm","Bender");
		SignAndExecute(depA, *pnt);
		delete pnt;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << "Intern try to create ShrubberyCreationForm" << std::endl;
		pnt = someIntern.makeForm("ShrubberyCreationForm","Fir");
		SignAndExecute(depA, *pnt);
		delete pnt;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << "Intern try to create UnknownForm" << std::endl;
		pnt = someIntern.makeForm("UnknownForm","Fir");
		SignAndExecute(depA, *pnt);
		delete pnt;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}



	return 0;
}
