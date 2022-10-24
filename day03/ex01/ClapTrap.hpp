/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 18:35:14 by cyetta            #+#    #+#             */
/*   Updated: 2022/10/24 19:07:17 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include<string>

class ClapTrap
{
private:
	std::string	Name;
	int			HitPoint;
	int			Energy;
	int			Attack;
public:
	ClapTrap();
	ClapTrap(const std::string &name);
	ClapTrap(const std::string &name, int hp, int energy, int attack);
	ClapTrap(const ClapTrap &val);
	const ClapTrap& operator = (const ClapTrap& val);
	virtual ~ClapTrap();
	const std::string&	getName() const;
	int		getHP() const;
	int		getEnergy() const;
	int		getAttack() const;
	void	setName(const std::string name);
	void	setHP(const int hp);
	void	setEnegy(const int energy);
	void	setAttack(const int attack);
	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

};


#endif