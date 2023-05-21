/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:14:12 by ygbouri           #+#    #+#             */
/*   Updated: 2022/11/15 14:34:23 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ClapTrap *ptrOb;
    ClapTrap *ptrOb1;
    ScavTrap ob; //= ScavTrap("soldat");
    ScavTrap ob1;// = ScavTrap("ennemi");
	ob = ScavTrap("soldat");
    ob1 = ScavTrap("ennemi");

    ptrOb = &ob;
    ptrOb1 = &ob1;
	ob.guardGate();
    ptrOb->setAttackDamage(50);
    ptrOb->attack(ob1.getName());
    ptrOb1->setHitPoint(ob1.getHitPoint() - ob.getAttckDamage());
    ptrOb->attack(ob1.getName());
    ptrOb1->setHitPoint(ob1.getHitPoint() - ob.getAttckDamage());
    ptrOb1->attack(ob.getName());
    ptrOb->setHitPoint(ob.getHitPoint() - ob1.getAttckDamage());
	ptrOb1->attack(ob.getName());
    ptrOb->setHitPoint(ob.getHitPoint() - ob1.getAttckDamage());
	ptrOb1->attack(ob.getName());
    ptrOb->setHitPoint(ob.getHitPoint() - ob1.getAttckDamage());
    return(0);
}
