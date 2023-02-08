/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:14:09 by ygbouri           #+#    #+#             */
/*   Updated: 2022/11/15 13:54:15 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>

class ClapTrap
{
	private:
		std::string name;
		int hitPoint;
		int energyPoint;
		int attackdamage;
	public:
		ClapTrap();
		~ClapTrap();
		ClapTrap(const ClapTrap &ob);
		ClapTrap(std::string Name);
		ClapTrap& operator=(const ClapTrap &ob);
		std::string getName(void);
		int getHitPoint( void );
		int getEnergyPoint( void );
		int getAttckDamage( void );
		void setHitPoint(int point);
		void setEnergyPoint(int ener);
		void setAttackDamage(int damage);
		void setName(std::string Name);
		void attack(const std::string& traget);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};
#endif
