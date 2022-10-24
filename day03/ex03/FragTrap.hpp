/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 14:22:14 by cyetta            #+#    #+#             */
/*   Updated: 2022/10/24 17:36:37 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
private:
	/* data */
public:
	FragTrap();
	FragTrap(const std::string &name);
	FragTrap(const std::string &name, int hp, int energy, int attack);
	FragTrap(const FragTrap &val);
	~FragTrap();
	const FragTrap& operator = (const FragTrap &val);
	void highFivesGuys(void);
	void attack(const std::string& target);
};

#endif