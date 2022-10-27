/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:53:59 by cyetta            #+#    #+#             */
/*   Updated: 2022/10/25 20:23:38 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include<string>

class Brain
{
private:
	std::string	ideas[100];
public:
	Brain();
	Brain(const Brain &val);
	~Brain();
	Brain& operator= (const Brain &val);
	const std::string& getIdea(const unsigned int i) const;
	void setIdea(const std::string &str, const unsigned int i);
};
#endif