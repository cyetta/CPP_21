/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:02:31 by cyetta            #+#    #+#             */
/*   Updated: 2022/10/25 17:17:34 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include<string>
# include"Animal.hpp"

class Cat : public Animal
{
public:
	Cat();
	Cat(const Cat &val);
	virtual ~Cat();
	Cat&	operator = (const Cat &val);
	virtual void	makeSound() const;
};
#endif
