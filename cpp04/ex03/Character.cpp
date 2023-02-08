/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:51:11 by ygbouri           #+#    #+#             */
/*   Updated: 2022/11/09 18:09:57 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

AMateria* Character::tabequip[4];
AMateria* Character::tabunequip[10];

Character::Character(const Character& ob):name(ob.name)
{
	std::cout << "Copy constructor of Character" << std::endl;
}

Character::Character(std::string const &na):name(na)
{
	std::cout << "Constructor of Character (name)" << std::endl;
}

Character& Character::operator=(const Character& ob)
{
	Character *temp;
	if (this != &ob)
	{
		if (this->getName() != ob.getName())
		{
			delete this;
			temp = new Character(ob.getName());
		}
	}
	return (*temp);
}

std::string const& Character::getName() const
{
	return (this->name);
}

void Character::equip(AMateria* m)
{
	int i = 0;
	while (i < 4)
	{
		if (tabequip[i] == NULL)
		{
			tabequip[i] = m;
			break;
		}
		i++;
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
	{
		int i = 0;
		while(i < 10)
		{
			if (tabunequip[i] == NULL)
				break;
			i++;
		}
		tabunequip[i] = tabequip[idx];
		tabequip[idx] = NULL;
	}
	else
	{
		std::cout << "id should be between 0 and 3" << std::endl;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (tabequip[idx])
	{
		tabequip[idx]->use(target);
	}
	else
		std::cout << "Object not found" << std::endl;
}

Character::~Character()
{
	std::cout << "Default destructor for Character" << std::endl;
}



