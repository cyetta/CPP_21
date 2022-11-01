/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 12:48:20 by cyetta            #+#    #+#             */
/*   Updated: 2022/11/01 14:48:43 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <ostream>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat
{
private:
	const std::string	name;
	int					grade;
public:
	Bureaucrat(const std::string& _name = "noname", int _grade = 150);
	~Bureaucrat();
	Bureaucrat(const Bureaucrat& val);
	Bureaucrat& operator = (const Bureaucrat& val);

	void	setGrade(int _grade);
	int		getGrade() const;
	const std::string& getName() const;

	void	incGrade();
	void	decGrade();
	void	signForm(Form& form);
	
	std::ostream& print(std::ostream& out) const;

	class GradeTooHighException : public std::exception
	{
		public:
		virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		public:
		virtual const char* what() const throw();
	};
};

std::ostream& operator<< (std::ostream &out, const Bureaucrat& val);

#endif