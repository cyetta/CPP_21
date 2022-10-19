/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:47:22 by cyetta            #+#    #+#             */
/*   Updated: 2022/10/19 16:01:58 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPONS_HPP
# define WEAPONS_HPP
# include <string>

class Weapon
{
private:
	std::string	type;
public:
	void				setType(const std::string &type);
	const std::string	&getType();
	Weapon(const std::string &type);
	~Weapon();
};

#endif