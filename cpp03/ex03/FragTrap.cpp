/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 17:22:38 by ygbouri           #+#    #+#             */
/*   Updated: 2022/11/03 13:34:33 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "Default constructor of FragTrap" << std::endl;
	this->hitPoint = 100;
	this->energyPoint = 100;
	this->attackdamage = 30;
}

FragTrap::FragTrap(std::string name)
{
    this->name = name;
	this->hitPoint = 100;
	this->energyPoint = 100;
	this->attackdamage = 30;
    std::cout << "Constructor have a name in parameter of FragTrap" << std::endl;
}

FragTrap::FragTrap(const FragTrap& ob)
{
    *this = ob;
    std::cout << "Copy constructor of FragTrap" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& ob)
{
    this->name = ob.name;
    this->hitPoint = ob.hitPoint;
    this->energyPoint = ob.energyPoint;
    this->attackdamage = ob.attackdamage;
    std::cout << "Copy assignement operator of FragTrap" << std::endl;
    return (*this);
}

// std::string FragTrap::getName()
// {
// 	return (this->name);
// }

// unsigned int FragTrap::getHitPoint()
// {
// 	return (this->hitPoint);
// }

// unsigned int FragTrap::getEnergyPoint()
// {
// 	return (this->energyPoint);
// }

// unsigned int FragTrap::getAttckDamage()
// {
// 	return (this->attackdamage);
// }

// void FragTrap::setName(std::string name)
// {
// 	this->name = name;
// }

// void FragTrap::setHitPoint(int hit)
// {
// 	if (hit < 0)
// 		this->hitPoint = 0;
// 	else
// 		this->hitPoint = hit;
// }

// void FragTrap::setEnergyPoint(int energy)
// {
// 	if (energy < 0)
// 		this->energyPoint = 0;
// 	else
// 		this->energyPoint = energy;
// }

// void FragTrap::setAttackDamage(int damage)
// {
// 	if (damage < 0)
// 		this->attackdamage = 0;
// 	else
// 		this->attackdamage = damage;
// }


void FragTrap::highFivesGuys()
{
    std::cout << "A positive high fives request on the standard output" << std::endl;

}

void FragTrap::attack(const std::string& target)
{
    if (this->getEnergyPoint() > 0 && this->getHitPoint() > 0)
	{
		std::cout << "FragTrap " << this->name << " attacks " << target << ", causing " << getAttckDamage() << " points of damage!" << std::endl;
		this->energyPoint--;
	}
	else
	{
		std::cout<< this->name << " has no energy or no hit point" << std::endl;
	}
}

FragTrap::~FragTrap()
{
    std::cout << "Default destructor of FragTrap" << std::endl;
}
