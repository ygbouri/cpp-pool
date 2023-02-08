/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 18:32:06 by ygbouri           #+#    #+#             */
/*   Updated: 2022/11/03 19:35:41 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"


WrongCat::WrongCat()
{
	this->setType("WrongCat");
	std::cout << "Default Constructor of WrongCat" << std::endl;
}

WrongCat::WrongCat(const WrongCat& ob)
{
	this->type = ob.type;
}

WrongCat& WrongCat::operator=(const WrongCat& ob)
{
	if (this != &ob)
	{
		if (this->type != ob.type)
			this->type = ob.type;
	}
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "The " << this->getType() << "sound" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor of WrongCat" << std::endl;
}
