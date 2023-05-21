/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 16:29:22 by ygbouri           #+#    #+#             */
/*   Updated: 2022/11/21 23:02:52 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "B.hpp"
#include "A.hpp"
#include "C.hpp"

Base* generate()
{
    Base *p;
    srand(time(NULL));
    if ((rand()%(3) + 1) == 1)
    {
        p = new A();
        return (p);
    }
    else if ((rand()%(3) + 1) == 2)
    {
        p = new B();
        return (p);
    }
    p = new C();
    return (p);
}

void identify(Base *p)
{
    A *a;
    B *b;
    C *c;

    a = dynamic_cast<A*>(p);
    b = dynamic_cast<B*>(p);
    c = dynamic_cast<C*>(p);
    if (a)
        std::cout << "A is casting" << std::endl;
    else if (b)
        std::cout << "B is casting" << std::endl;
    else if (c)
        std::cout << "C is casting" << std::endl;
}


void identify(Base &p)
{
    try
    {
        A &a = dynamic_cast<A&>(p);
        std::cout << "A is casting" << std::endl;
    }
    catch(const std::exception& e)
    {
         try
        {
            B &b = dynamic_cast<B&>(p);
            std::cout << "B is casting" << std::endl;

        }
        catch(const std::exception& e)
        {
            try
            {
                C &c = dynamic_cast<C&>(p);
                std::cout << "C is casting" << std::endl;
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << "for C" <<'\n';
            }
        }
    }

   
}


int main()
{
    Base *s = generate();
    identify(s);
    Base *ptr = generate();
    Base &p = *ptr;
    identify(p);
    
    delete s;
    delete ptr;
}