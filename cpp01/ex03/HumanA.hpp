/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 18:36:25 by ygbouri           #+#    #+#             */
/*   Updated: 2022/10/17 22:21:37 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H__
#define HUMANA_H__

#include <iostream>
#include "Weapon.hpp"
class HumanA
{
    private:
        Weapon &_w;
        std::string _name;
    public:
        HumanA(std::string name, Weapon &w);
        HumanA( void );
        ~HumanA( void );
        void    attack( void );
        std::string getName( void );
        Weapon& getWeapon( void );
        void setName(std::string name);
        void setWeapon(Weapon w);
};
#endif