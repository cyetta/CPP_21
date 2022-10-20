/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 12:56:03 by cyetta            #+#    #+#             */
/*   Updated: 2022/10/20 15:18:39 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

Harl::Harl()
{
	cmpl[0] = &Harl::debug;
	cmpl[1] = &Harl::info;
	cmpl[2] = &Harl::warning;
	cmpl[3] = &Harl::error;
	cmpl[4] = &Harl::minor;
}

Harl::~Harl()
{
}

void Harl::debug( void )
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn`t put enough bacon in my burger! If you did, I wouldn`t be asking for more!" << std::endl;
}

void Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I`ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::minor( void )
{
	std::cout << "Probably complaining about insignificant problems" << std::endl;
}

void Harl::complain( std::string level )
{
	int idx = 4; 

	idx -= !level.compare("DEBUG") * 4 + !level.compare("INFO") * 3 + !level.compare("WARNING") * 2 + !level.compare("ERROR");
	// (this->*cmpl[idx])();
	(this->*cmpl[idx])();
}