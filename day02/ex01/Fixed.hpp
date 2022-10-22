/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 11:14:56 by cyetta            #+#    #+#             */
/*   Updated: 2022/10/21 16:23:25 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed
{
private:
	int	value;
	static const int fractionBit = 8;
public:
	Fixed();
	Fixed(const Fixed &value);
	Fixed(const int val);
	Fixed(const float val);
	const Fixed&	operator = (const Fixed &value);
	~Fixed();
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat( void ) const;
	int		toInt( void ) const;
};

std::ostream& operator<< (std::ostream &ostrm, const Fixed &val);
#endif