/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:55:08 by ygbouri           #+#    #+#             */
/*   Updated: 2022/11/15 17:34:59 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "Default constructor of DiamondTrap" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap& ob)
{
	*this = ob;
}

DiamondTrap::DiamondTrap(std::string name)
{
	this->name = name;
	this->ClapTrap::setHitPoint(100);
	this->ClapTrap::setEnergyPoint(50);
	this->ClapTrap::setAttackDamage(30);
	this->ClapTrap::setName(this->name + "_clap_name");
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& ob)
{
	this->name = ob.name;
	this->FragTrap::hitPoint = ob.FragTrap::hitPoint;
	this->ScavTrap::energyPoint = ob.ScavTrap::energyPoint;
	this->FragTrap::attackdamage = ob.FragTrap::attackdamage;
	return (*this);
}

void DiamondTrap::whoAmI()
{
	if (this->ClapTrap::getEnergyPoint() > 0 && this->ClapTrap::getHitPoint() > 0)
	{
		std::cout << "DiamondTrap name is " << this->name << " and ClapTrap name is "<< ClapTrap::getName() << std::endl;
		ClapTrap::energyPoint--;
	}
	else
		std::cout<< this->name << " has no energy or no hit point" << std::endl;

}
DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}
