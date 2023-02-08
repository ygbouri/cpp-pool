/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 18:36:35 by ygbouri           #+#    #+#             */
/*   Updated: 2022/11/11 15:26:18 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

int main()
{
    Weapon club = Weapon("crude spiked club");

    HumanA bob ("Bob", club);
    bob.attack();
    club.setType("some other type of club");
    bob.attack();

    Weapon cl = Weapon("AK");
    HumanB jim ("Jim");
	jim.attack();
    jim.setWeapon(&cl);
    jim.attack();
    cl.setType("some other type of club");
    jim.attack();

	
}
