/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:39:57 by cyetta            #+#    #+#             */
/*   Updated: 2022/10/25 17:42:33 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include<string>

class WrongAnimal
{
protected:
	std::string type;
public:
	WrongAnimal(const std::string &val = "WrongAnimal");
	WrongAnimal(const WrongAnimal &val);
	virtual ~WrongAnimal();
	WrongAnimal&	operator = (const WrongAnimal &val);
	const std::string&	getType() const;
	void 	setType(const std::string &val = "WrongAnimal");
	void	makeSound() const;
};
#endif
