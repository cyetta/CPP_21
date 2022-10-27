/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:02:31 by cyetta            #+#    #+#             */
/*   Updated: 2022/10/25 20:45:55 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include<string>
# include"Animal.hpp"
# include"Brain.hpp"

class Cat : public Animal
{
private:
	Brain	*brain;
public:
	Cat();
	Cat(const Cat &val);
	virtual ~Cat();
	Cat&	operator = (const Cat &val);
	virtual void	makeSound() const;
	const std::string& getIdea(const unsigned int i) const;
	void setIdea(const std::string &str, const unsigned int i);
};
#endif
