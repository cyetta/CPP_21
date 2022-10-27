/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:48:09 by cyetta            #+#    #+#             */
/*   Updated: 2022/10/27 17:47:25 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
private:
	/* data */
public:
	Cure(std::string const &type = "cure");
	Cure(const Cure &val);
	~Cure();
	Cure&	operator = (const Cure& val);

	virtual AMateria*	clone() const;
	virtual void	use(ICharacter& target);
};

#endif