/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 18:36:22 by ygbouri           #+#    #+#             */
/*   Updated: 2022/11/11 13:01:47 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &w): _name(name), _w(w)
{

}

std::string HumanA::getName()
{
    return (this->_name);
}

Weapon& HumanA::getWeapon()
{
    return (this->_w);
}

void    HumanA::attack()
{
    std::cout << this->getName() << " attacks with their " << this->_w.getType()<< std::endl;
}

void    HumanA::setName(std::string name)
{
    this->_name = name;
}

void    HumanA::setWeapon(Weapon w)
{
    this->_w = w;
}

HumanA::~HumanA()
{
    std::cout << "HumanA is finish" << std::endl;
}
