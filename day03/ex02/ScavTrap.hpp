/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 14:22:14 by cyetta            #+#    #+#             */
/*   Updated: 2022/10/23 18:13:32 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
	/* data */
public:
	ScavTrap();
	ScavTrap(const std::string &name);
	ScavTrap(const std::string &name, int hp, int energy, int attack);
	ScavTrap(const ScavTrap &val);
	~ScavTrap();
	const ScavTrap& operator = (const ScavTrap &val);
	void guardGate();
	void attack(const std::string& target);
};

#endif