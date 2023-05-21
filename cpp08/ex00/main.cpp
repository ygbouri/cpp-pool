/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 19:32:57 by ygbouri           #+#    #+#             */
/*   Updated: 2022/11/25 05:31:25 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

//#include <iterator>
int main()
{
    std::vector<int> v1;
    v1.push_back(2);
    v1.push_back(1);
    v1.push_back(4);
    v1.push_back(5);
    v1.push_back(255);
    v1.push_back(244);
    v1.push_back(21);
    v1.push_back(22);
    v1.push_back(27);
    v1.push_back(28);
    v1.push_back(0);
    try
    {
        easyfind(v1, 230);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << " not in vector" << std::endl;
    }
}