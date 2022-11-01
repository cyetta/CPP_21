/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 11:28:55 by cyetta            #+#    #+#             */
/*   Updated: 2022/11/01 19:29:13 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string _target) : 
	Form("RobotomyRequestForm", constSignGrade, constExecGrade), target(_target)
{
	std::srand(unsigned(std::time(NULL)));
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& val) :
	Form(val), target(val.target)
{	
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm&	RobotomyRequestForm::operator= (const RobotomyRequestForm& val)
{
	if (this == &val)
		return *this;
	//Form::operator=(val); 
	static_cast <Form&>(*this) = val;
	target = val.target;
	return *this;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);
	std::cout << "*** DRILLING NOISES ***" << std::endl;
	if (std::rand() % 2)
		std::cout << target << " has been robotomized successefully!" << std::endl;
	else
		std::cout << "The " << target << "`s robotomy failed!" << std::endl;
}

std::ostream&	RobotomyRequestForm::print(std::ostream &out) const
{
	out << "Target:" << target << "\n";
	Form::print(out);
	return out;

}