/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyetta <cyetta@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 12:51:32 by cyetta            #+#    #+#             */
/*   Updated: 2022/10/27 16:23:06 by cyetta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	int			storeCnt;
	int			storeSize;
	AMateria	**store;
	void		dropStore();
	void		copyStore(AMateria **val);
public:
	MateriaSource();
	MateriaSource(const MateriaSource &val);
	MateriaSource& operator = (const MateriaSource &val);
	virtual ~MateriaSource();
	virtual void learnMateria(AMateria*);
	virtual AMateria* createMateria(std::string const & type);
};

#endif