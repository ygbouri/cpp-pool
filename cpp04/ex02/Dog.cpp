/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 14:36:56 by ygbouri           #+#    #+#             */
/*   Updated: 2022/11/04 15:10:55 by ygbouri          ###   ########.fr       */
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
}

Dog& Dog::operator=(const Dog& ob)
{
	if (this != &ob)
	{
		if (this->type != ob.type)
			this->type = ob.type;
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

Brain* Dog::getBrain()
{
	return (br);
}

void Dog::setBrain(Brain &br)
{
	*(this->br) = br;
}
