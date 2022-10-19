/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 00:56:07 by cyetta            #+#    #+#             */
/*   Updated: 2022/10/19 03:46:32 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie
{
private:
	std::string	name;
public:
	void announce( void );
	void setName(const std::string &zname);
	Zombie();
	~Zombie();
};

Zombie* zombieHorde( int N, std::string name );
#endif