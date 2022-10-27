/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:47:08 by cyetta            #+#    #+#             */
/*   Updated: 2022/10/27 15:58:35 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

# include <string>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
protected:
	std::string	materiaType;
public:
	AMateria(std::string const &type = "");
	AMateria(const AMateria &val);
	virtual	~AMateria();

	AMateria& operator = (const AMateria& val);

	std::string const	& getType() const; //Returns the materia type
	virtual	AMateria* clone() const = 0;
	virtual	void use(ICharacter& target);
};

#endif