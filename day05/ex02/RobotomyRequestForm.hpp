/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 11:29:04 by cyetta            #+#    #+#             */
/*   Updated: 2022/10/31 22:43:04 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"
# include "string"

class RobotomyRequestForm : public Form
{
private:
	const static int	constSignGrade = 72;
	const static int	constExecGrade = 45;
	std::string	target;
public:
	RobotomyRequestForm(const std::string _target);
	RobotomyRequestForm(const RobotomyRequestForm& val);
	virtual ~RobotomyRequestForm();
	
	RobotomyRequestForm& operator= (const RobotomyRequestForm& val);
	
	virtual void	execute(Bureaucrat const & executor) const;
	virtual std::ostream&	print(std::ostream &out) const;
};


#endif