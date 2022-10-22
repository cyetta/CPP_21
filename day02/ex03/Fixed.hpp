/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 11:14:56 by cyetta            #+#    #+#             */
/*   Updated: 2022/10/21 20:36:25 by cyetta           ###   ########.fr       */
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
	~Fixed();
	const Fixed&	operator = (const Fixed &value);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat( void ) const;
	int		toInt( void ) const;

	bool	operator > (const Fixed &val) const;
	bool	operator <= (const Fixed &val) const;
	bool	operator < (const Fixed &val) const;
	bool	operator >= (const Fixed &val) const;
	bool	operator == (const Fixed &val) const;
	bool	operator != (const Fixed &val) const;

	Fixed	operator + (const Fixed &val) const;
	Fixed	operator - (const Fixed &val) const;
	Fixed	operator * (const Fixed &val) const;
	Fixed	operator / (const Fixed &val) const;

	Fixed&	operator ++ ();
	Fixed&	operator -- ();
	Fixed	operator ++ ( int n );
	Fixed	operator -- ( int n );

	static Fixed&	min(Fixed &v1, Fixed &v2);
	static const Fixed&	min(const Fixed &v1, const Fixed &v2);
	static Fixed&	max(Fixed &v1, Fixed &v2);
	static const Fixed&	max(const Fixed &v1, const Fixed &v2);
};


std::ostream& operator<< (std::ostream &ostrm, const Fixed &val);

#endif