/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 12:48:23 by cyetta            #+#    #+#             */
/*   Updated: 2022/10/30 10:23:27 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat(const std::string& _name, int _grade) :
	name(_name), grade(_grade)
{
	if (_grade <= 0)
		throw GradeTooHighException();
	else if(_grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(const Bureaucrat& val):
	name(val.name), grade(val.grade)
{}

Bureaucrat&	Bureaucrat::operator = (const Bureaucrat& val)
{
	if (this == &val)
		return *this;
	grade = val.grade;
	return *this;
}

void	Bureaucrat::setGrade(int _grade)
{
	if (_grade <= 0)
		throw GradeTooHighException();
	else if(_grade > 150)
		throw GradeTooLowException();
	grade = _grade;
}

int	Bureaucrat::getGrade() const
{
	return grade;
}

const std::string&	Bureaucrat::getName() const
{
	return name;
}

void	Bureaucrat::incGrade()
{
	if ((grade - 1) <= 0)
		throw GradeTooHighException();
	--grade;
}

void	Bureaucrat::decGrade()
{
	if((grade + 1) > 150)
		throw GradeTooLowException();
	++grade;
}

void	Bureaucrat::signForm(Form& form)
{
	try
	{
		form.beSigned(*this);
		std::cout << name << " signed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr<< name<< " couldn’t sign "<< form.getName()<< " because "<< e.what() << std::endl;
	}
}

std::ostream& Bureaucrat::print(std::ostream& out) const
{
	return out << name <<", bureaucrat grade " << grade;
}

std::ostream& operator<< (std::ostream &out, const Bureaucrat& val)
{
	return val.print(out);
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "ERROR! Grade is too high!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "ERROR! Grade is too low!";
}