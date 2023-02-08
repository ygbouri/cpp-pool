/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 18:49:18 by ygbouri           #+#    #+#             */
/*   Updated: 2022/11/18 09:02:32 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug()
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" <<std::endl;
}

void Harl::info()
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning()
{
    std::cout  << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."<< std::endl;
}

void Harl::error()
{
    std::cout <<"This is unacceptable! I want to speak to the manager now."<< std::endl;
}

void Harl::other()
{
    std::cout << "Probably complaining about insignificant problems"<< std::endl;
}

void Harl::complain(std::string level)
{
    int i = -1;
    int j;
    typedef  void (Harl::*ptrFunction)( void );
    
    ptrFunction a[] ={ &Harl::debug, &Harl::info, &Harl::warning, &Harl::error, &Harl::other};
    i = ((level == "DEBUG") * 0) + ((level == "INFO") * 1) + ((level == "WARNING") * 2) + ((level == "ERROR") * 3);
    j = (((level != "DEBUG") && (level != "INFO") && (level != "WARNING") && (level != "ERROR")) * 4);
    while(j == 4)
    {
        i = 4;
        break;
    }
    switch (i)
    {
        case 0:
            (this->*(a[i++]))();
        case 1:
            (this->*(a[i++]))();
        case 2:
            (this->*(a[i++]))();
        case 3:
            (this->*(a[i]))();
            break;
        default:
            (this->*(a[i]))();
            break;
    }
}