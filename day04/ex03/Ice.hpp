/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:48:27 by cyetta            #+#    #+#             */
/*   Updated: 2022/10/27 16:09:14 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
private:
	/* data */
public:
	Ice(std::string const &type = "ice");
	Ice(const Ice &val);
	~Ice();
	Ice&	operator = (const Ice& val);

	virtual AMateria*	clone() const;
	virtual void	use(ICharacter& target);
};

#endif