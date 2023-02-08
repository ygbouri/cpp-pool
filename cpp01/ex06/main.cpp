/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 18:49:23 by ygbouri           #+#    #+#             */
/*   Updated: 2022/10/21 19:04:37 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ar , char **arg)
{
    if (ar == 2)
    {
        if (arg[1])
        {
            std::string level = arg[1];
            Harl h;
            h.complain(level);
            return (0);
        }
    }
    std::cout << "Probably complaining about insignificant problems" << std::endl;
    return (0);
}