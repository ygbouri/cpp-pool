/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:14:12 by ygbouri           #+#    #+#             */
/*   Updated: 2022/11/15 17:47:56 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap d("player1");

	std::cout << "hitpoint "<< d.getHitPoint() << std::endl;
	std::cout << "energypoint "<< d.getEnergyPoint()<< std::endl;
	std::cout << "attack damage"<< d.getAttckDamage()<< std::endl;
	d.whoAmI();
	d.attack("player2");
	std::cout << d.getName() << std::endl;
    return(0);
}
