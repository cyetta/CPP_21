/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:54:01 by cyetta            #+#    #+#             */
/*   Updated: 2022/10/25 19:58:15 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Default constructor Brain class" << std::endl;
}

Brain::Brain(const Brain &val)
{
	std::cout << "Copy constructor Brain class" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = val.ideas[i];
}

Brain::~Brain()
{
	std::cout << "Default destructor Brain class" << std::endl;
}

Brain& Brain::operator= (const Brain &val)
{
	if (this == &val)
		return *this;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = val.ideas[i];
	return *this;
}

const std::string& Brain::getIdea(const unsigned int i) const
{
	return ideas[i % 100];
}

void Brain::setIdea(const std::string &str, const unsigned int i)
{
	ideas[i % 100] = str;
}