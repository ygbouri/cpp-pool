/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:51:05 by ygbouri           #+#    #+#             */
/*   Updated: 2022/11/09 16:15:54 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type):type(type)
{
	std::cout <<"AMateria constructor (type)" << std::endl;
}

std::string const& AMateria::getType() const
{
	return (this->type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "member function use of AMateria "<< std::endl;
}

AMateria::AMateria()
{
	std::cout << "Default constructor of AMateria " << std::endl;
}

AMateria::AMateria(const AMateria& ob):type(ob.type)
{

}

AMateria& AMateria::operator=(const AMateria& ob)
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

AMateria::~AMateria()
{
	std::cout << "Default constructor of AMateria" << std::endl;
}
