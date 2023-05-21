/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:14:03 by ygbouri           #+#    #+#             */
/*   Updated: 2022/11/15 13:31:15 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
    this->name = name;
    this->hitPoint = 10;
    this->energyPoint = 10;
    this->attackdamage = 10;
    std::cout << "constructor of name attribute" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &ob)
{
    *this = ob;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &ob)
{
	if (this != &ob)
	{
		this->name = ob.name;
		this->hitPoint = ob.hitPoint;
		this->energyPoint = ob.energyPoint;
		this->attackdamage = ob.attackdamage;
	}
    return (*this);
}

std::string ClapTrap::getName()
{
    return (this->name);
}

int ClapTrap::getHitPoint()
{
    return (this->hitPoint);
}

int ClapTrap::getEnergyPoint()
{
    return (this->energyPoint);
}

int ClapTrap::getAttckDamage()
{
    return (this->attackdamage);
}

void ClapTrap::setName(std::string name)
{
    this->name = name;
}

void ClapTrap::setHitPoint(int hit)
{
    this->hitPoint = hit;
}

void ClapTrap::setEnergyPoint(int energy)
{
    this->energyPoint = energy;
}

void ClapTrap::setAttackDamage(int damage)
{
    this->attackdamage = damage;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->getEnergyPoint() > 0 && this->getHitPoint() > 0)
    {
        std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << getAttckDamage() << " points of damage!" << std::endl;
        this->energyPoint--;
    }
    else
    {
        std::cout<< this->name << " has no energy or no hit point" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    this->attackdamage = amount;
    std::cout << "attack damage  initialised " << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->getEnergyPoint() > 0 && this->getHitPoint())
    {
        this->hitPoint += amount;
        std::cout << "hitpoint repaired" << std::endl;
        this->energyPoint--;
    }
    else
        std::cout<< this->name << "no energy you cant repaired hitpoint" << std::endl;
}

ClapTrap::ClapTrap()
{
	this->name = "";
	this->hitPoint = 10;
	this->attackdamage = 0;
	this->energyPoint = 10;
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Default destructor called" << std::endl;
}
