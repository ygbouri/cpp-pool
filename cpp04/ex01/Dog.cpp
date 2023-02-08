/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 14:36:56 by ygbouri           #+#    #+#             */
/*   Updated: 2022/11/17 00:54:23 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->setType("Dog");
	this->br = new Brain();
	std::cout << "Constructor of Dog" << std::endl;
}

Dog::Dog(const Dog& ob)
{
	this->type = ob.type;
	this->br = new Brain();
	*(this->br) = *(ob.br);
}

Dog& Dog::operator=(const Dog& ob)
{
	std::cout << "Copy assignement operator" << std::endl;
	if (this != &ob)
	{
		if (this->type != ob.type)
		{
			this->type = ob.type;
			*(this->br) = *(ob.br);
		}
	}
	return(*this);
}

Dog::~Dog()
{
	delete br;
	std::cout << "Destructor of Dog" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "The " << this->getType() << " sound" << std::endl;
}

Brain* Dog::getBrain() const
{
	return (br);
}

void Dog::setBrain(Brain &br)
{
	*(this->br) = br;
}
