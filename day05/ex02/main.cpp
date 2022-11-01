/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 12:48:14 by cyetta            #+#    #+#             */
/*   Updated: 2022/11/01 17:07:00 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

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
	Bureaucrat bob("Bob", 5);
	Bureaucrat marly("Marly", 25);
	Bureaucrat john("John", 72);
	Bureaucrat siril("Siril", 140);
	Bureaucrat non;
	Bureaucrat	depA[] = {(non), (siril), (john), (marly), (bob)};
	

	PresidentialPardonForm mag("Maggi");
	ShrubberyCreationForm	sim("Fir");
	RobotomyRequestForm	pers("Persival");
	
	SignAndExecute(depA, pers);
	SignAndExecute(depA, mag);
	SignAndExecute(depA, sim);

	return 0;
}
