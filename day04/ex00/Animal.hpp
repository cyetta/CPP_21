/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:12:37 by cyetta            #+#    #+#             */
/*   Updated: 2022/10/25 17:17:44 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include<string>

class Animal
{
protected:
	std::string type;
public:
	Animal(const std::string &val = "Animal");
	Animal(const Animal &val);
	virtual ~Animal();
	Animal&	operator = (const Animal &val);
	const std::string&	getType() const;
	void 	setType(const std::string &val = "Animal");
	virtual void	makeSound() const;
};
#endif
