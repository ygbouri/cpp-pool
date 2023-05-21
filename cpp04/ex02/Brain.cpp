/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 21:47:15 by ygbouri           #+#    #+#             */
/*   Updated: 2022/11/04 11:55:59 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Default constructor of Brain" << std::endl;
}

Brain::Brain(const Brain& ob)
{
	*this = ob;
}

Brain& Brain::operator=(const Brain& ob)
{
	if (this != &ob)
	{
		for(int i = 0; i < ob.ideas->length(); i++)
		{
			this->ideas[i] = ob.ideas[i];
		}
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Default Destructor of Brain" << std::endl;
}
