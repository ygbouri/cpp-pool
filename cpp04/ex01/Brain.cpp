/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 21:47:15 by ygbouri           #+#    #+#             */
/*   Updated: 2022/11/17 00:52:15 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Default constructor of Brain" << std::endl;
}

Brain::Brain(const Brain& ob)
{
	for(int i = 0; i < 100; i++)
	{
		this->ideas[i] = ob.ideas[i];
	}
}

Brain& Brain::operator=(const Brain& ob)
{
	int i;
	if (this != &ob)
	{
		std::cout << "brain operator " << std::endl;
		// for(int i = 0; i < 100; i++)
		// {
		// 	this->ideas[i] = ob.ideas[i];
		// }
	}
	return (*this);
}

void Brain::setBrainS(std::string name)
{
	std::cout << "string"<<std::endl;
	this->ideas[0] = name;
}

Brain::~Brain()
{
	std::cout << "Default Destructor of Brain" << std::endl;
}
