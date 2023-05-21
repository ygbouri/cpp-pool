/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 18:36:32 by ygbouri           #+#    #+#             */
/*   Updated: 2022/11/11 13:04:31 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H__
#define HUMANB_H__

# include <iostream>
#include "Weapon.hpp"
#include "HumanA.hpp"

class HumanB
{
	private:
		std::string _name;
		Weapon	*_w;
	public:
		~HumanB( void );
		HumanB(std::string name);
		Weapon 	getWeapon( void );
		void	setWeapon(Weapon *w);
		void 	attack( void );
		std::string getName( void );
};
#endif
