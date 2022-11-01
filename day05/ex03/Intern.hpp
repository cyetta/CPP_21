/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 13:10:19 by cyetta            #+#    #+#             */
/*   Updated: 2022/11/01 17:09:03 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define  INTERN_HPP

#include <exception>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
public:
	Intern();
	Intern(const Intern& val);
	Intern& operator= (const Intern& val);
	~Intern();
	Form* makeForm(const std::string& formName, const std::string& target);
	
	class NoForm : public std::exception{
	public:
		virtual const char* what() const throw();
	};
};

#endif