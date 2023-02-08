/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 16:16:40 by ygbouri           #+#    #+#             */
/*   Updated: 2022/11/15 14:11:57 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap:public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(ScavTrap& ob);
        ScavTrap& operator=(const ScavTrap& ob);
        ~ScavTrap();
        ScavTrap(std::string name);
        void attack(const std::string& target);
        int getHitPoint( void );
		int getEnergyPoint( void );
		int getAttckDamage( void );
        std::string getName( void );
		void setHitPoint(int point);
		void setEnergyPoint(int energy);
		void setAttackDamage(int damage);
		void setName(std::string Name);
        void guardGate();
};
#endif
