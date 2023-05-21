/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:51:16 by ygbouri           #+#    #+#             */
/*   Updated: 2022/11/09 18:02:53 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure():AMateria("cure")
{
	std::cout << "Default constructor of Cure" << std::endl;
}

Cure::Cure(const Cure& ob):AMateria(ob.getType())
{
	std::cout << "Copy constructor of Cure" << std::endl;
}

Cure& Cure::operator=(const Cure& ob)
{
	if (this != &ob)
	{
		if (this->getType() != ob.getType())
		{
			*this = ob;
		}
	}
	return (*this);
}

Cure::Cure(std::string const name):AMateria(name)
{
	std::cout << "Constructor for initial type" << std::endl;
}

Cure::~Cure()
{
	std::cout << "Default destructor of Cure" << std::endl;
}

AMateria* Cure::clone() const
{
	AMateria *am = new Cure();
	return (am);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals "<< target.getName()<< "'s wounds *" << std::endl;
}

