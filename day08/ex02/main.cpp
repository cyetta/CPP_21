/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:09:24 by cyetta            #+#    #+#             */
/*   Updated: 2022/11/09 16:00:17 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "MutantStack.hpp"

int	main(void)
{
	
MutantStack<int> mstack;
mstack.push(5);
mstack.push(17);
std::cout << mstack.top() << std::endl;
mstack.pop();
std::cout << mstack.size() << std::endl;
mstack.push(3);
mstack.push(5);
mstack.push(737);
mstack.push(0);
MutantStack<int>::iterator it = mstack.begin();
MutantStack<int>::iterator ite = mstack.end();
++it;
--it;
while (it != ite)
{
std::cout << *it << std::endl;
++it;
}
std::stack<int> s(mstack);
MutantStack<std::string> strStack;
strStack.push("one");
strStack.push("two");
strStack.push("nine");
strStack.push("zero");
MutantStack<std::string>::iterator its=strStack.begin();
MutantStack<std::string>::iterator ites=strStack.end();
while (its != ites)
{
std::cout << *its << std::endl;
++its;
}

return 0;
}
