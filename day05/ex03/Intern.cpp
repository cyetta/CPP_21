/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 13:10:23 by cyetta            #+#    #+#             */
/*   Updated: 2022/11/01 17:13:30 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Form* newShrabberyForm(const std::string &target){
	return new ShrubberyCreationForm(target);}

Form* newRobotomyForm(const std::string &target){
	return new RobotomyRequestForm(target);}
	
Form* newPPardonForm(const std::string &target){
	return new PresidentialPardonForm(target);}

Intern::Intern()
{}

Intern::Intern(const Intern& val)
{
	(void)val;
}

Intern::~Intern()
{}

Intern& Intern::operator= (const Intern& val)
{
	(void)val;
	return *this;
}

Form* Intern::makeForm(const std::string& fname, const std::string& target)
{
	typedef Form* (*FormFunc)(const std::string& target);
	FormFunc formArray[] = {&newPPardonForm, &newRobotomyForm, &newShrabberyForm};

	int i = 3;
	i -= !fname.compare("PresidentialPardonForm") * 3 + !fname.compare("RobotomyRequestForm") * 2 + !fname.compare("ShrubberyCreationForm");	
	if (i == 3)
		throw NoForm();
	return formArray[i](target);
}

const char* Intern::NoForm::what() const  throw()
{
	return "Error! The intern knows nothing about this form";
}