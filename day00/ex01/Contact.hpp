/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 16:21:19 by cyetta            #+#    #+#             */
/*   Updated: 2022/10/16 22:07:58 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact
{
private:
	std::string FirstName;
	std::string	LastName;
	std::string	NickName;
	std::string	PhoneNumber;
	std::string	DarkestSecret;
public:
	Contact();
	~Contact();
	void	SetFirstName(std::string Name);
	void	SetLastName(std::string Name);
	void	SetNickName(std::string Name);
	void	SetPhoneNumber(std::string Phone);
	void	SetSecret(std::string Secret);
	std::string	GetFirstName();
	std::string	GetLastName();
	std::string	GetNickName();
	std::string	GetPhoneNumber();
	std::string	GetSecret();
};
#endif