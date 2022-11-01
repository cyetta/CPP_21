/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 11:29:22 by cyetta            #+#    #+#             */
/*   Updated: 2022/10/31 22:31:24 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTPARDON_HPP
# define PRESIDENTPARDON_HPP

# include "Form.hpp"
# include "string"

class PresidentialPardonForm : public Form
{
private:
	const static int	constSignGrade = 25;
	const static int	constExecGrade = 5;
	std::string	target;
public:
	PresidentialPardonForm(const std::string _target);
	PresidentialPardonForm(const PresidentialPardonForm& val);
	virtual ~PresidentialPardonForm();
	
	PresidentialPardonForm& operator= (const PresidentialPardonForm& val);
	
	virtual void	execute(Bureaucrat const & executor) const;
	virtual std::ostream&	print(std::ostream &out) const;
};

#endif
