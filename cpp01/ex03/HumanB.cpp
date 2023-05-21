/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 18:36:29 by ygbouri           #+#    #+#             */
/*   Updated: 2022/11/11 13:03:29 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->_name = name;
    this->_w = NULL;
}

Weapon HumanB::getWeapon()
{
    return (*(this->_w));
}

void HumanB::setWeapon(Weapon *w)
{
    this->_w = w;
}

std::string HumanB::getName()
{
    return (this->_name);
}

void HumanB::attack()
{
   if (this->_w != NULL)
        std::cout << this->getName() << " attack with their " << this->_w->getType() << std::endl;
   else
       std::cout << this->getName() << " dont have a weapon" << std::endl;
}

HumanB::~HumanB()
{
    std::cout << "HumanB is finish" << std::endl;
}
