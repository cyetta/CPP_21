/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 11:29:07 by cyetta            #+#    #+#             */
/*   Updated: 2022/11/01 19:29:19 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string _target) : 
	Form("PresidentPardonForm", constSignGrade, constExecGrade), target(_target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& val) :
	Form(val), target(val.target)
{	
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm&	PresidentialPardonForm::operator= (const PresidentialPardonForm& val)
{
	if (this == &val)
		return *this;
	//Form::operator=(val); 
	static_cast <Form&>(*this) = val;
	target = val.target;
	return *this;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);
	std::cout << target <<" you has been pardoned by Zaphod Beeblebrox." << std::endl;
}

std::ostream&	PresidentialPardonForm::print(std::ostream &out) const
{
	out << "Target:" << target << "\n";
	Form::print(out);
	return out;
}
