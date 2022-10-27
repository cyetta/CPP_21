/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:12:15 by cyetta            #+#    #+#             */
/*   Updated: 2022/10/25 20:53:45 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include<string>
# include"Animal.hpp"
# include"Brain.hpp"

class Dog : public Animal
{
private:
	Brain	*brain;
public:
	Dog();
	Dog(const Dog &val);
	virtual ~Dog();
	Dog&	operator = (const Dog &val);
	virtual void	makeSound() const;
	const std::string& getIdea(const unsigned int i) const;
	void setIdea(const std::string &str, const unsigned int i);
};
#endif
