/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 16:16:40 by ygbouri           #+#    #+#             */
/*   Updated: 2022/11/02 14:36:52 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap:public ClapTrap
{
    // private:
    //     std::string name;
    //     unsigned int hitPoint;
    //     unsigned int energyPoint;
    //     unsigned int attackDamage;
    public:
        ScavTrap();
        ScavTrap(ScavTrap& ob);
        ScavTrap& operator=(const ScavTrap& ob);
        ~ScavTrap();
        ScavTrap(std::string name);
        void attack(const std::string& target);
        unsigned int getHitPoint( void );
		unsigned int getEnergyPoint( void );
		unsigned int getAttckDamage( void );
        std::string getName( void );
		void setHitPoint(int hit);
		void setEnergyPoint(int energy);
		void setAttackDamage(int damage);
		void setName(std::string Name);
        void guardGate();
};
#endif