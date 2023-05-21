/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 14:36:41 by ygbouri           #+#    #+#             */
/*   Updated: 2022/11/03 19:35:57 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Constructor of Animal" << std::endl;
}

Animal::Animal(const Animal& ob)
{
	this->type = ob.type;
}

Animal& Animal::operator=(const Animal& ob)
{
	if (this != &ob)
	{
		if (this->type != ob.type)
			this->type = ob.type;
	}
	return (*this);
}

std::string Animal::getType() const
{
	return (this->type);
}

void Animal::setType(std::string type)
{
	this->type = type;
}

void Animal::makeSound() const
{
	std::cout <<"sound of Animal" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Destructor of Class Animal " << std::endl;
}
