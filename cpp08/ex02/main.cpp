/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 02:19:22 by ygbouri           #+#    #+#             */
/*   Updated: 2022/11/25 07:19:00 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "MutanStack.hpp"
#include <list>

int main()
{
    {
        MutantStack<int> mstack;
        mstack.push(5);
        mstack.push(17);
        std::cout << mstack.top() << std::endl;
        mstack.pop();
        std::cout  << mstack.size() << std::endl;
        mstack.push(3);
        //mstack.push(5);
        mstack.push(737);
        //[...]
        mstack.push(0);
        mstack.pop();
        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();
        ++it;
        --it;
        while (it != ite)
        {
            std::cout  << *it << std::endl;
            ++it;
        }
        std::stack<int> s(mstack);
    }
    {
        std::list <int> mstack;
        mstack.push_back(5);
        mstack.push_back(17);
        std::cout << mstack.back() << std::endl;
        mstack.pop_back();
        std::cout << mstack.size() << std::endl;
        mstack.push_back(3);
        mstack.push_back(5);
        mstack.push_back(737);
        //[...]
        mstack.push_back(0);
        std::list <int>::iterator it = mstack.begin();
        std::list <int>::iterator ite = mstack.end();
        ++it;
        --it;
        while (it != ite)
        {
        std::cout << *it << std::endl;
        ++it;
        }
        std::list<int> s(mstack);
        
    }
    return 0;
}