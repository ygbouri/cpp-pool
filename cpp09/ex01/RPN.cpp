/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 22:13:17 by ygbouri           #+#    #+#             */
/*   Updated: 2023/04/13 22:13:41 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

std::string trim(std::string str, const char * space)
{
    str.erase(str.find_last_not_of(space) + 1);
    str.erase(0, str.find_first_not_of(space));
    return str;
}

int calculer(int nb1, int nb2, char op)
{
    int res = 0;
    switch (op)
    {
        case '+':
            res = nb1 + nb2;
            break;
        case '-':
            res = nb1 - nb2;
            break;
        case '*':
            res = nb1 * nb2;
            break;
        case '/':
            if (nb2 == 0)
            {
                std::cout << "Error" << std::endl;
                exit(0);
            }
            res = nb1 / nb2;
            break;
    }
    return res;
}

int rpn(int ar, char **arg)
{
    std::string exp = arg[1];
    std::stack<int> ss;
    int res = 0, nb1, nb2;
    exp = trim (exp, " \t\n\r\f\v");
    for (int i = 0; i< exp.length(); i++)
    {
        if ((exp.c_str()[i] != ' ') && (exp.c_str()[i] != '+')
                && (exp.c_str()[i] != '-') && (exp.c_str()[i] != '*')
                && (exp.c_str()[i] != '/') && (exp.c_str()[i] != '\t') && isdigit(exp.c_str()[i]) == 0)
        {
            std::cout << "Error" << std::endl;
            return (0);
        }
    }
    for (int i = 0; i < exp.length(); i++)
    {
        if (exp.c_str()[i] == ' ' || exp.c_str()[i] == '\n'
            || exp.c_str()[i] == '\r'|| exp.c_str()[i] == '\f'
            || exp.c_str()[i] == '\v')
        {
            exp.erase(i,1);
            i = 0;
        }
    }
    for(int i = 0; i<exp.length(); i++)
    {
        if (isdigit(exp.c_str()[i]))
        {
            ss.push(exp.c_str()[i] - 48);
        }
        else
        {
            nb2 = ss.top();
            ss.pop();
            if (ss.size() == 0)
            {
                std::cout << "Error" << std::endl;
                return (0);
            }
            nb1 = ss.top();
            ss.pop();
            res = calculer(nb1, nb2, exp.c_str()[i]);
            ss.push(res);
        }
    }
    if (ss.size() == 1)
    {
        std::cout << ss.top() << std::endl;
    }
    else
        std::cout << "Error"<< std::endl;
    return (0);
}