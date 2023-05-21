/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:14:12 by ygbouri           #+#    #+#             */
/*   Updated: 2022/11/15 13:23:28 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap ob = ClapTrap("soldat");
    ClapTrap ob1 = ClapTrap("ennemi");
    ob.takeDamage(15);
    ob.attack(ob1.getName());
	std::cout << "number :" << ob1.getHitPoint() - ob.getAttckDamage() << std::endl;
    ob1.setHitPoint(ob1.getHitPoint() - ob.getAttckDamage());
	ob1.takeDamage(220);
	ob1.attack(ob.getName());
    ob.setHitPoint(ob.getHitPoint() - ob1.getAttckDamage());
	std::cout <<"**********************"<< std::endl;
    ob1.setHitPoint(ob1.getHitPoint() - ob.getAttckDamage());
    ob.attack(ob1.getName());
    ob1.setHitPoint(ob1.getHitPoint() - ob.getAttckDamage());
    ob.attack(ob1.getName());
	ob.setName("larbi");
    ob1.setHitPoint(ob1.getHitPoint() - ob.getAttckDamage());
    ob.attack(ob1.getName());
    ob1.setHitPoint(ob1.getHitPoint() - ob.getAttckDamage());
    ob.attack(ob1.getName());
    ob1.setHitPoint(ob1.getHitPoint() - ob.getAttckDamage());
    ob.attack(ob1.getName());
    ob1.setHitPoint(ob1.getHitPoint() - ob.getAttckDamage());
    ob.attack(ob1.getName());
    ob1.setHitPoint(ob1.getHitPoint() - ob.getAttckDamage());
    ob.attack(ob1.getName());
    ob1.setHitPoint(ob1.getHitPoint() - ob.getAttckDamage());
    ob.attack(ob1.getName());
    ob1.setHitPoint(ob1.getHitPoint() - ob.getAttckDamage());
    ob.attack(ob1.getName());
    ob1.setHitPoint(ob1.getHitPoint() - ob.getAttckDamage());
    ob.attack(ob1.getName());
    ob1.setHitPoint(ob1.getHitPoint() - ob.getAttckDamage());
    return(0);
}
