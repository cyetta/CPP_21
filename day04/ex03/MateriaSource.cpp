/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 12:51:30 by cyetta            #+#    #+#             */
/*   Updated: 2022/10/27 21:07:46 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "MateriaSource.hpp"

void MateriaSource::dropStore()
{
	for (int i = 0; i < storeCnt ; i++)
		delete store[i];
	delete [] store;
}

void MateriaSource::copyStore(AMateria **val)
{
	for (int i = 0; i < storeCnt ; i++)
		store[i] = val[i]->clone();
}

MateriaSource::MateriaSource(): storeCnt(0), storeSize(1), store(new AMateria*[storeSize])
{
}

MateriaSource::MateriaSource(const MateriaSource &val) :
	storeCnt(val.storeCnt), storeSize(val.storeSize), store(new AMateria*[storeSize])
{
	copyStore(val.store);
}

MateriaSource::~MateriaSource()
{
	dropStore();
}

MateriaSource& MateriaSource::operator = (const MateriaSource &val)
{
	if (this == &val)
		return *this;
	dropStore();
	storeCnt = val.storeCnt;
	storeSize = val.storeSize;
	store = new AMateria*[storeSize];
	copyStore(val.store);
	return *this;
}

void MateriaSource::learnMateria(AMateria* val)
{
	if (!val)
	{
		std::cout << "No materia to learn!" << std::endl;
		return ;
	}
	for(int i = 0; i < storeCnt; i++)
		if (val->getType() == store[i]->getType())
		{
			std::cout << "Materia " << val->getType() << " alredy added" << std::endl;
			return ;
		}
	if ((storeCnt + 1) > storeSize)
	{
		AMateria **tmp = store;
		store = new AMateria*[storeSize + (storeSize / 2 + 1)];
		for(int i = 0; i < storeCnt; i++)
			store[i] = tmp[i];
		delete [] tmp;
		storeSize += (storeSize / 2 + 1);
	}
	store[storeCnt++] = val;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for(int i = 0; i < storeCnt; i++)
		if (store[i]->getType() == type)
			return store[i]->clone();
	std::cout << "Unknown materia - " << type << ". Can't create them!" << std::endl;
	return NULL;
}