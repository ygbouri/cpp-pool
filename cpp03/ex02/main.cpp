/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:14:12 by ygbouri           #+#    #+#             */
/*   Updated: 2022/11/15 17:09:28 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    ClapTrap *ptrOb;
    ClapTrap *ptrOb1;
    ClapTrap *ptrObf;
    ClapTrap *ptrObf1;
    ScavTrap ob ("soldatScavTrap");
    ScavTrap ob1("ennemiScavTrap");
    FragTrap obf("soldatFragTrap");
    FragTrap obf1("ennemiFragTrap");
    ptrOb = &ob;
    ptrOb1 = &ob1;
    ptrObf = &obf;
    ptrObf1 = &obf1;
    ob.guardGate();
    ob.setAttackDamage(550);
    ptrOb->attack(ob.getName());
    ob1.setHitPoint((int)ob1.getHitPoint() - (int)ob.getAttckDamage());
    ptrOb->attack(ob.getName());
    ob1.setHitPoint((int)ob1.getHitPoint() - (int)ob.getAttckDamage());
    ptrOb->attack(ob.getName());
    ob1.setHitPoint((int)ob1.getHitPoint() - (int)ob.getAttckDamage());
    ptrOb1->attack(ob.getName());
    obf.setAttackDamage(500);
    obf.highFivesGuys();
    ptrObf->attack(obf.getName());
    obf1.setHitPoint((int)obf1.getHitPoint() - (int)obf.getAttckDamage());
    ptrObf->attack(obf.getName());
    obf1.setHitPoint((int)obf1.getHitPoint() - (int)obf.getAttckDamage());
    ptrObf->attack(obf1.getName());
    obf1.setHitPoint((int)obf1.getHitPoint() - (int)obf.getAttckDamage());
    ptrObf1->attack(obf1.getName());
    return(0);
}
