/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 19:52:36 by cyetta            #+#    #+#             */
/*   Updated: 2022/11/05 00:10:31 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <exception>

class Base
{
public:
	virtual ~Base(){};
};

class A : public Base { ~A(){};};
class B : public Base { ~B(){};};
class C : public Base { ~C(){};};

Base * generate(void)
{
	switch (std::rand() % 3){
	case 0:
		return new A;
	case 1:
		return new B;
	case 2:
		return new C;
	}
	return NULL;
}

void identify(Base* p)
{
	if(dynamic_cast<A*>(p))
		std::cout << "This is pointer to object class A" <<std::endl;
	else if(dynamic_cast<B*>(p))
		std::cout << "This is pointer to object class B" <<std::endl;
	else if(dynamic_cast<C*>(p))
		std::cout << "This is pointer to object class C" <<std::endl;
}

void identify(Base& p)
{
	try
	{
		(void) dynamic_cast<A&>(p);
		std::cout << "This is reference to object class A" <<std::endl;
		return ;
	}
	catch(const std::bad_cast& e)
	{
	}
	try
	{
		(void) dynamic_cast<B&>(p);
		std::cout << "This is reference to object class B" <<std::endl;
		return ;
	}
	catch(const std::bad_cast& e)
	{
	}
	try
	{
		(void) dynamic_cast<C&>(p);
		std::cout << "This is reference to object class C" <<std::endl;
		return ;
	}
	catch(const std::bad_cast& e)
	{
	}
	
}

int main(void)
{
	std::srand(unsigned(std::time(NULL)));

	Base *pnt;
	pnt = generate();
	identify(pnt);
	identify(*pnt);
	delete pnt;
	pnt = generate();
	identify(pnt);
	identify(*pnt);
	delete pnt;
	pnt = generate();
	identify(pnt);
	identify(*pnt);
	delete pnt;
	pnt = generate();
	identify(pnt);
	identify(*pnt);
	delete pnt;
	pnt = generate();
	identify(pnt);
	identify(*pnt);
	delete pnt;
}