/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:11:54 by cyetta            #+#    #+#             */
/*   Updated: 2022/11/09 15:53:18 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
#include <stack>

template <class T>
class MutantStack	: public std::stack<T>
{
public:
	typedef typename std::stack<T>::container_type::iterator	iterator;
	typedef typename std::stack<T>::container_type::const_iterator	const_iterator;

	MutantStack(void)
	{}
	
	MutantStack(const MutantStack& val)
	{
		*this = val;
	}
	
	~MutantStack(void)
	{}

	MutantStack& operator=(const MutantStack& val)
	{
		if (this == &val)
			return *this;
		std::stack<T>::operator=(val);
		return *this;
	}

	iterator	begin(void){
		return (this->c.begin());
	}
	
	const_iterator begin(void) const {
		return (this->c.begin());
	}

	iterator	end(void){
		return (this->c.end());
	}
	const_iterator end(void) const {
		return (this->c.end());}
};
#endif