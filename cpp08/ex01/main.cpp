/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 23:08:11 by ygbouri           #+#    #+#             */
/*   Updated: 2022/11/25 07:23:55 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <stack>
int main()
{
    Span sp = Span(20);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(10);
    sp.addNumber(11);
    std::vector<int> v;
    v.push_back(4);
    v.push_back(14);
    v.push_back(24);
    v.push_back(34);
    v.push_back(44);
    sp.addRange(v.begin(), v.end(), v.size());
    srand(time(NULL));
    for(int i = 0; i < 200; i++)
    {
        sp.addNumber(rand());
    }
    try
    {
        std::cout << sp.shortestSpan() << std::endl;
    }
    catch(const std::exception& e )
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
   sp.affichData();
    return 0;
}