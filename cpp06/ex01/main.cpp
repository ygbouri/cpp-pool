/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 12:55:47 by ygbouri           #+#    #+#             */
/*   Updated: 2022/11/21 22:57:13 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

typedef struct s_Data
{
    int x;
    int y;
}           Data;

uintptr_t serialize(Data* d)
{
    uintptr_t p = reinterpret_cast<uintptr_t > (d);
    return (p);
}

Data* deserialize(uintptr_t raw)
{
    Data *d = reinterpret_cast<Data *> (raw);
    return (d);
}
int main()
{
    Data *d = new Data();
    Data *d1;
    uintptr_t p;

    d->x = 10;
    d->y =  11;
    std::cout << "d address "<< d << "p = " << p << std::endl;
    p = (serialize(d));
    std::cout << p << std::endl;
    std::cout << "d address "<< d << std::endl;
    d1 = deserialize(p);
    std::cout << "d address "<< d << std::endl;
    std::cout << d1->x << std::endl;
    std::cout << d1->y << std::endl;
   delete d;
   return 0;
    
}
