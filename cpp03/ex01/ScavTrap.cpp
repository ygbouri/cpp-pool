/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 16:34:47 by ygbouri           #+#    #+#             */
/*   Updated: 2022/11/15 14:26:09 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->hitPoint = 100;
	this->energyPoint = 50;
	this->attackdamage = 20;
	std::cout << "Default Constructor of ScavTrap" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap& ob)
{
	*this = ob;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &ob)
{
	this->name = ob.name;
	this->hitPoint = ob.hitPoint;
	this->energyPoint = ob.energyPoint;
	this->attackdamage = ob.attackdamage;
	std::cout << "Copy assignment operator" << std::endl;
	return (*this);
}

ScavTrap::ScavTrap(std::string name)
{
	this->name = name;
	this->hitPoint = 100;
	this->energyPoint = 50;
	this->attackdamage = 20;
}


std::string ScavTrap::getName()
{
	return (this->name);
}

int ScavTrap::getHitPoint()
{
	return (this->hitPoint);
}

int ScavTrap::getEnergyPoint()
{
	return (this->energyPoint);
}

int ScavTrap::getAttckDamage()
{
	return (this->attackdamage);
}

void ScavTrap::setName(std::string name)
{
	this->name = name;
}

void ScavTrap::setHitPoint(int hit)
{
	this->hitPoint = hit;
}

void ScavTrap::setEnergyPoint(int energy)
{
	this->energyPoint = energy;
}

void ScavTrap::setAttackDamage(int damage)
{
	this->attackdamage = damage;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->getEnergyPoint() > 0 && this->getHitPoint() > 0)
	{
		std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << getAttckDamage() << " points of damage!" << std::endl;
		this->energyPoint--;
	}
	else
	{
		std::cout<< this->name << " has no energy or no hit point" << std::endl;
	}
}

void ScavTrap::guardGate()
{
	   std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}
ScavTrap::~ScavTrap()
{
	std::cout << "Default ScavTrap destructor is called" << std::endl;
}
