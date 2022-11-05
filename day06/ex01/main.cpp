/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 19:52:36 by cyetta            #+#    #+#             */
/*   Updated: 2022/11/04 22:06:31 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct Data
{
	std::string	name;
	int	age;
};

uintptr_t serialize( Data* ptr)
{
	uintptr_t	uintptr = reinterpret_cast<uintptr_t>(ptr);
	return uintptr; 
}

Data* deserialize(uintptr_t raw)
{
	struct Data*	ptr = reinterpret_cast<Data* >(raw);
	return ptr;
}

int main(void)
{
	struct Data	data;
	
	data.name = "Samuel";
	data.age = 25;

	std::cout << "name: " <<data.name <<"\nage: " << data.age<<std::endl;

	uintptr_t ptrSerial = serialize(&data);

	Data* ptrDeserial;

	ptrDeserial = deserialize(ptrSerial);
	
	std::cout << "name: " <<ptrDeserial->name <<"\nage: " << ptrDeserial->age<<std::endl;
	
	
	return 0;
}

