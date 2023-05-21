/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:54:01 by ygbouri           #+#    #+#             */
/*   Updated: 2022/11/11 15:27:52 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR;
    std::string &stringREF = str;
    stringPTR = &str;

    std::cout << "***** memory address *****" << std::endl;

    std::cout << "The memory address of the string variable : " << &str << std::endl;
    std::cout << "The memory address held by stringPTR : " << stringPTR << std::endl;
    std::cout << "The memory address held by stringREF : " << &stringREF << std::endl;

    std::cout << "***** Values *****" << std::endl;

    std::cout << "The value of the string variable : " << str << std::endl;
    std::cout << "The value pointed to by stringPTR : " << *stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF : " << stringREF << std::endl;
    return 0;
}
