/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 14:52:09 by ygbouri           #+#    #+#             */
/*   Updated: 2022/10/31 17:46:21 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main()
{
    Fixed x1(7), x2(2) ,x3(13) ,y1(8),y2(2),y3(3), p1x(3), p1y(3);
    Point ob1(x1, y1), ob2(x2, y2), ob3(x3, y3), po(p1x, p1y);
    if (bsp(ob1, ob2, ob3, po))
        std::cout << "the point inside the triangle" << std::endl;
    else
        std::cout << "the point outside of the triangle" << std::endl;
    return(0);
}