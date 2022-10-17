/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 16:09:47 by cyetta            #+#    #+#             */
/*   Updated: 2022/10/16 22:08:20 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Contact.hpp"

Contact::Contact()
{
}


Contact::~Contact()
{
}

void	Contact::SetFirstName(std::string Name)
{
	FirstName = Name;
}

void	Contact::SetLastName(std::string Name)
{
	LastName = Name;
}

void	Contact::SetNickName(std::string Name)
{
	NickName = Name;
}

void	Contact::SetPhoneNumber(std::string Phone)
{
	PhoneNumber = Phone;
}

void	Contact::SetSecret(std::string Secret)
{
	this->DarkestSecret = Secret;
}

std::string	Contact::GetFirstName()
{
	return FirstName;
}

std::string	Contact::GetLastName()
{
	return LastName;
}
std::string	Contact::GetNickName()
{
	return NickName;
}
std::string	Contact::GetPhoneNumber()
{
	return PhoneNumber;
}
std::string	Contact::GetSecret()
{
	return DarkestSecret;
}
