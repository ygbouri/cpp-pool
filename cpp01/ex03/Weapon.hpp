/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 18:36:45 by ygbouri           #+#    #+#             */
/*   Updated: 2022/11/11 13:00:35 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H__
#define WEAPON_H__

# include <iostream>
class Weapon
{
    private:
        std::string type;
    public:
        Weapon();
        ~Weapon();
        Weapon(std::string type);
        std::string &getType();
        void   setType(std::string type);
};

#endif
