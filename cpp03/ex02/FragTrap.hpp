/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 17:22:40 by ygbouri           #+#    #+#             */
/*   Updated: 2022/11/02 14:37:10 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

class FragTrap:public ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap& ob);
        FragTrap& operator=(const FragTrap& ob);
        ~FragTrap();
        unsigned int getHitPoint( void );
		unsigned int getEnergyPoint( void );
		unsigned int getAttckDamage( void );
        std::string getName( void );
		void setHitPoint(int hit);
		void setEnergyPoint(int energy);
		void setAttackDamage(int attack);
		void setName(std::string Name);
        void attack(const std::string& target);
        void highFivesGuys( void );
};
#endif