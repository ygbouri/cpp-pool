/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 22:35:13 by ygbouri           #+#    #+#             */
/*   Updated: 2023/04/13 22:15:07 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ar, char **arg)
{
    if (ar == 2)
    {
        rpn(ar, arg);
    }
    else
        std::cout << "Error" << std::endl;
    return (0);
}
