/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 12:21:08 by ygbouri           #+#    #+#             */
/*   Updated: 2022/11/18 16:26:19 by ygbouri          ###   ########.fr       */
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
    std::cout <<"This comment not found."<< std::endl;
}

void Harl::complain(std::string level)
{
    int i;
    int j;
	void (Harl::*ptrFunction[5])( void );


    ptrFunction [0] = &Harl::debug;
    ptrFunction [1] = &Harl::info ;
    ptrFunction [2] = &Harl::warning;
    ptrFunction [3] = &Harl::error;
    ptrFunction [4] = &Harl::other;

    i = ((level == "DEBUG") * 0) + ((level == "INFO") * 1) + ((level == "WARNING") * 2) + ((level == "ERROR") * 3);
    j = (((level != "DEBUG") && (level != "INFO") && (level != "WARNING") && (level != "ERROR")) * 4);
	while(j == 4)
    {
        (this->*ptrFunction[j])();
        exit(0);
    }
    (this->*ptrFunction[i])();
}
