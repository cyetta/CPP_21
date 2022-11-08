/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 19:52:36 by cyetta            #+#    #+#             */
/*   Updated: 2022/11/05 17:23:15 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "TFunction.hpp"

int main(void)
{

	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl << std::endl << std::endl;
	
	int ia = 7, ib = 3;
	char ca = 'Q', cb = 'q';
	float fa = 1.234, fb = 2.345;
	
	std::cout<< "int a="<< ia << " int b="<< ib <<std::endl;
	swap(ia, ib);
	std::cout<< "swap(a, b). int a="<< ia << " int b=" << ib << std::endl << std::endl;
	std::cout<< "char a=\'"<< ca << "\' char b=\'"<< cb <<"\'"<<std::endl;
	swap(ca, cb);
	std::cout<< "swap(a, b). char a=\'"<< ca << "\' char b=\'"<< cb <<"\'"<<std::endl << std::endl;
	std::cout<< "float a="<< fa << " float b="<< fb <<std::endl;
	swap(fa, fb);
	std::cout<< "swap(a, b). float a="<< fa << " float b=" << fb << std::endl << std::endl;
	std::cout<< "int a="<< ia << " int b=" << ib << " min(a, b) "<< min(ia, ib) <<std::endl;
	std::cout<< "char a=\'"<< ca << "\' char b=\'" << cb << "\' min(a, b) \'"<< min(ca, cb) << "\'"<<std::endl;
	std::cout<< "float a="<< fa << " float b=" << fb << " min(a, b) "<< min(fa, fb) <<std::endl<<std::endl;
	std::cout<< "int a="<< ia << " int b=" << ib << " max(a, b) "<< max(ia, ib) <<std::endl;
	std::cout<< "char a=\'"<< ca << "\' char b=\'" << cb << "\' max(a, b) \'"<< max(ca, cb) << "\'"<<std::endl;
	std::cout<< "float a="<< fa << " float b=" << fb << " max(a, b) "<< max(fa, fb) <<std::endl;

}