/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 11:28:50 by cyetta            #+#    #+#             */
/*   Updated: 2022/11/01 19:29:01 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string _target) : 
	Form ("ShrubberyForm", constSignGrade, constExecGrade), target(_target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &val):
	Form(val.getName(), val.getSignGrade(), val.getExecGrade()), target(val.target)
{}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm& ShrubberyCreationForm::operator= (const ShrubberyCreationForm& val)
{
	if (this == &val)
		return *this;
	//Form::operator=(val); 
	static_cast<Form&>(*this) = val;
	target = val.target;
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);
	std::ofstream oFile;
	oFile.open(target + "_shrubbery");
	if(oFile.is_open())
	{
		oFile << "\n";
		oFile << "        /\\        \n";
		oFile << "       ****       \n";
		oFile << "      ******      \n";
		oFile << "     ********     \n";
		oFile << "    **********    \n";
		oFile << "   ************   \n";
		oFile << "  **************  \n";
		oFile << "        ||        \n";
		oFile << std::endl;
	}
	else
		std::cerr << "Error! Can't open file "<< target << "_shrubbery" << std::endl;
}

std::ostream&	ShrubberyCreationForm::print(std::ostream &out) const
{
	out << "Target:" << target << "\n";
	Form::print(out);
	return out;
}
