/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 11:28:40 by cyetta            #+#    #+#             */
/*   Updated: 2022/10/31 22:42:26 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERRYCREATIONFORM_HPP
# define SHRUBBERRYCREATIONFORM_HPP

# include "Form.hpp"
# include "string"

class ShrubberyCreationForm : public Form
{
private:
	const static int	constSignGrade = 145;
	const static int	constExecGrade = 137;
	std::string	target;
public:

	ShrubberyCreationForm(const std::string _name);
	ShrubberyCreationForm(const ShrubberyCreationForm &val);
	virtual ~ShrubberyCreationForm();
	
	ShrubberyCreationForm& operator= (const ShrubberyCreationForm& val);
	
	virtual void	execute(Bureaucrat const & executor) const;
	virtual std::ostream&	print(std::ostream &out) const;
};
#endif