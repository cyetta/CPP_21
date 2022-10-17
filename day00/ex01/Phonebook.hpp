/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 16:23:18 by cyetta            #+#    #+#             */
/*   Updated: 2022/10/16 22:06:56 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class Phonebook
{
private:
	Contact	Contacts[8];
	int		NextFreeContact;
	void	Print10(std::string Str);
	void	PrintContactShot(int Index);
	void	PrintContactWide(int Index);
public:
	Phonebook();
	~Phonebook();
	void	AddContact();
	void	SearchContact();
};
#endif