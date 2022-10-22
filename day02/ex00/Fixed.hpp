/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 11:14:56 by cyetta            #+#    #+#             */
/*   Updated: 2022/10/21 12:08:04 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
private:
	int	value;
	static const int fractionBit = 8;
public:
	Fixed();
	Fixed(const Fixed &value);
	const Fixed& operator=(const Fixed &value);
	~Fixed();
	int getRawBits(void) const;
	void setRawBits(int const raw);
};
#endif