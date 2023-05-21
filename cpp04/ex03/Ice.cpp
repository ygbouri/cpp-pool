/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:51:21 by ygbouri           #+#    #+#             */
/*   Updated: 2022/11/09 18:03:03 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice():AMateria("ice")
{
	std::cout << "Default constructor of Ice" << std::endl;
}

Ice::Ice(const Ice& ob):AMateria(ob.getType())
{
	std::cout << "Copy constuctor of Ice" << std::endl;
}

Ice& Ice::operator=(const Ice& ob)
{
	if (this != &ob)
	{
		if (this->getType() != ob.getType())
		{
			*this = ob;
		}
	}
	return(*this);
}

Ice::Ice(std::string const name):AMateria(name)
{
	std::cout << "Constructor for initial type" << std::endl;
}

Ice::~Ice()
{
	std::cout << "Default destructor of Ice" << std::endl;
}

AMateria* Ice::clone() const
{
	AMateria *ic = new Ice("ice");
	return (ic);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
