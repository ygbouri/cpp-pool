/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 14:36:47 by ygbouri           #+#    #+#             */
/*   Updated: 2022/11/16 21:24:38 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat()
{
	this->setType("Cat");
	this->br = new Brain();
	std::cout << "Default Constructor of Cat" << std::endl;
}

Cat::Cat(const Cat& ob)
{
	this->type = ob.type;
	this->br = new Brain();
	*(this->br) = *(ob.br);
}

Cat& Cat::operator=(const Cat& ob)
{
	if (this != &ob)
	{
		if (this->type != ob.type)
		{
			this->type = ob.type;
			*(this->br) = *(ob.br);
		}
	}
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "The " << this->getType() << " sound" << std::endl;
}

Brain* Cat::getBrain() const
{
	return (br);
}

void Cat::setBrain(Brain &br)
{
	*(this->br) = br;
}
Cat::~Cat()
{
	delete br;
	std::cout << "Destructor of Cat" << std::endl;
}
