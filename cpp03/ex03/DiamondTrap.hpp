/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:55:11 by ygbouri           #+#    #+#             */
/*   Updated: 2022/11/15 17:46:15 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
#define DIAMONDTRAP_H


#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap:public ScavTrap,public FragTrap
{
	private:
		std::string name;
	public:
		DiamondTrap();
		DiamondTrap(DiamondTrap& ob);
		DiamondTrap& operator=(const DiamondTrap& ob);
		~DiamondTrap();
		DiamondTrap(std::string name);
		void	whoAmI( void );
        void	attack(const std::string& target);


};
#endif
