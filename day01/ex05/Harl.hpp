/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 12:55:58 by cyetta            #+#    #+#             */
/*   Updated: 2022/10/20 15:06:04 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <string>

class Harl
{
private:
	typedef void (Harl::*ComplainFnc)(void);
	ComplainFnc	cmpl[5];
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
	void minor( void );
public:
	Harl();
	~Harl();
	void complain( std::string level );
};



#endif