/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 00:56:07 by cyetta            #+#    #+#             */
/*   Updated: 2022/10/19 02:07:35 by cyetta           ###   ########.fr       */
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
	Zombie(const std::string &zname);
	~Zombie();
};

Zombie* newZombie(std::string name);
void randomChump( std::string name );
#endif