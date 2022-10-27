/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:12:15 by cyetta            #+#    #+#             */
/*   Updated: 2022/10/25 17:17:25 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include<string>
# include"Animal.hpp"

class Dog : public Animal
{
public:
	Dog();
	Dog(const Dog &val);
	virtual ~Dog();
	Dog&	operator = (const Dog &val);
	virtual void	makeSound() const;
};
#endif
