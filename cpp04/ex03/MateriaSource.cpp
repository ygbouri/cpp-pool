/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 22:51:33 by ygbouri           #+#    #+#             */
/*   Updated: 2022/11/09 18:04:05 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

AMateria* MateriaSource::tabMateria[4];
MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		tabMateria[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource& ob)
{
	*this = ob;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& ob)
{
	MateriaSource *temp;
	if (this != &ob)
	{
		*this = ob;
		delete this;
		temp = new MateriaSource(ob);
	}
	return (*temp);
}

MateriaSource::~MateriaSource()
{
	std::cout << "Default destructor of MateriaSource" << std::endl;
}

void MateriaSource::learnMateria(AMateria* ob)
{
	int i = 0;
	while (i < 4)
	{
		if (tabMateria[i] == NULL)
		{
			tabMateria[i] = ob;
			return ;
		}
		i++;
	}
	std::cout << "I can't store more Materias" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const& type)
{
	int i = 0;
	while(i < 4)
	{
		if (tabMateria[i]->getType() == type)
		{
			return (tabMateria[i]);
		}
		i++;
	}
	return (0);
}
