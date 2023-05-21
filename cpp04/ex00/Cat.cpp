/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 14:36:47 by ygbouri           #+#    #+#             */
/*   Updated: 2022/11/03 19:35:54 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->setType("Cat");
	std::cout << "Default Constructor of Cat" << std::endl;
}

Cat::Cat(const Cat& ob)
{
	this->type = ob.type;
}

Cat& Cat::operator=(const Cat& ob)
{
	if (this != &ob)
	{
		if (this->type != ob.type)
			this->type = ob.type;
	}
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "The " << this->getType() << " sound" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Destructor of Cat" << std::endl;
}
