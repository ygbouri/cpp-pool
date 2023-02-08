/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:17:54 by ygbouri           #+#    #+#             */
/*   Updated: 2022/10/17 16:28:56 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    Zombie::announce()
{
	std::cout << getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie::getName()
{
	return (this->_name);
}
void Zombie::setName(std::string name)
{
	this->_name = name;
}

Zombie::Zombie(std::string name)
{
	this->_name = name;
}

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	std::cout << getName() << " is dead" << std::endl;
}
