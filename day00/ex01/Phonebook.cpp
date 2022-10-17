/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 16:09:19 by cyetta            #+#    #+#             */
/*   Updated: 2022/10/17 14:00:37 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include "Phonebook.hpp"

std::string	ReadValue(std::string Message)
{
	std::string Str;
	do
	{
		std::cout << Message;
		std::getline(std::cin, Str);
		if (std::cin.eof())
			exit(1);
		if (Str.length() == 0)
			std::cout << "Can't be empty. Please, try again" << std::endl;
	} while (Str.length() == 0);
	return Str;
}

void	Phonebook::Print10(std::string Str)
{
	if (Str.length() > 10)
		std::cout << Str.substr(0,9) << ".";
	else
		std::cout << std::setw(10) << Str;
	std::cout << "|";
}

Phonebook::Phonebook()
{
	NextFreeContact = 0;
}

Phonebook::~Phonebook()
{
}

void	Phonebook::AddContact()
{
	std::string	Str;
	Str = ReadValue("Enter a first name ");
	Contacts[NextFreeContact].SetFirstName(Str);
	Str = ReadValue("Enter a last name ");
	Contacts[NextFreeContact].SetLastName(Str);
	Str = ReadValue("Enter a  nickname ");
	Contacts[NextFreeContact].SetNickName(Str);
	Str = ReadValue("Enter a phone number ");
	Contacts[NextFreeContact].SetPhoneNumber(Str);
	Str = ReadValue("Enter a secret ");
	Contacts[NextFreeContact].SetSecret(Str);
	NextFreeContact++;
	NextFreeContact %= 8;
	std::cout << std::endl;
}

void	Phonebook::PrintContactShot(int Index)
{
	std::cout << "|" << std::setw(10) << Index + 1 << "|";
	Print10(Contacts[Index].GetFirstName());
	Print10(Contacts[Index].GetLastName());
	Print10(Contacts[Index].GetNickName());
	std::cout << std::endl;
}

void	Phonebook::PrintContactWide(int Index)
{
	std::cout << "First name  : " << Contacts[Index].GetFirstName() << std::endl;
	std::cout << "Last name   : " << Contacts[Index].GetLastName() << std::endl;
	std::cout << "Nick name   : " << Contacts[Index].GetNickName() << std::endl;
	std::cout << "Phone number: " << Contacts[Index].GetPhoneNumber() << std::endl;
	std::cout << "Secret      : " << Contacts[Index].GetSecret() << std::endl;
}

void	Phonebook::SearchContact()
{
	int			i = -1;
	std::string	Str;

	std::cout << "|     Index|First name| Last name|  Nickname|" << std::endl;
	while (++i < 8)
		PrintContactShot(i);

	std::cout << "Please, enter the index of the contact: ";
	std::cin >> Str;
	if (std::cin.eof())
		return ;
	std::cin.ignore(32767, '\n');
	i = 0;
	if (Str.length() == 1 && std::isdigit(Str[0]))
		i = std::stoi(Str);
	if (i > 0 && i < 9)
	{
		if ((Contacts[i - 1].GetFirstName().length() != 0))
			PrintContactWide(i - 1);
		else
			std::cout << "This contact does not exist.\n";
		std::cout << std::endl;
	}
	else
		std::cout << "This contact does not exist.\n" << std::endl;
}


int	main (void)
{
	Phonebook	PBook;
	std::string	Cmd;

	// std::cout << "Enter a command(ADD, SEARCH, EXIT): " << std::endl;
	do
	{
		std::cout << "Enter a command(ADD, SEARCH, EXIT): " << std::endl;
		std::getline(std::cin, Cmd);
		if (std::cin.eof())
			break;
		else if (Cmd == "ADD")
			PBook.AddContact();
		else if (Cmd == "SEARCH")
			PBook.SearchContact();
		else if (Cmd == "EXIT")
			break;
		else
			std::cout << "Command does not exist, choose another command. " << Cmd << std::endl;
	} while (!std::cin.eof());
	if (std::cin.eof())
		std::cout << std::endl;
	return 0;
}