/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutanStack.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 02:19:31 by ygbouri           #+#    #+#             */
/*   Updated: 2022/11/25 05:10:09 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stack>
#include <deque>

template <typename T, typename Container = std::deque<T> >

class MutantStack : public std::stack<T, Container>
{
    public:
        typedef typename Container::iterator iterator;
        MutantStack()
        {
            std::cout << "Default constructor called" << std::endl;
        }
        MutantStack(const MutantStack& ob)
        {
            *this = ob;
        }
        MutantStack& operator=(const MutantStack& ob)
        {
            if (this != &ob)
                *this = ob;
            return (*this);
        }
        ~MutantStack()
        {
            std::cout << "Default destructor called" << std::endl;
        }
        iterator begin()
        {
            return (std::stack<T, Container>::c.begin());
        }
        iterator end()
        {
            return (std::stack<T, Container>::c.end());
        }
};