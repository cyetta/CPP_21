/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 19:31:13 by cyetta            #+#    #+#             */
/*   Updated: 2022/10/27 18:12:17 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class Character : public ICharacter
{
private:
	std::string name;
	AMateria*	inventory[4];
	AMateria**	floor;
	int	floorCount;
	int	floorQantity;
	AMateria*	getInventory(const int idx) const;
	void	drop2floor(AMateria *m);
public:
	Character(std::string _name);
	Character(const Character &val);
	virtual	~Character();
	Character&	operator = (const Character &val);

	virtual std::string const &	getName() const;
	virtual void	equip(AMateria *m);
	virtual void	unequip(int idx);
	virtual void	use(int idx, ICharacter& target);
	
	virtual std::ostream&	print(std::ostream& out) const;
	friend std::ostream& operator << (std::ostream& out, const Character& val);
};

#endif