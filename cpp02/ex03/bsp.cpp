/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 14:51:53 by ygbouri           #+#    #+#             */
/*   Updated: 2022/10/31 13:54:18 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float calcVec(Point const a , Point const b , Point const point)
{
    return ((point.getFixedPointX() - b.getFixedPointX()) * (a.getFixedPointY() - b.getFixedPointY()) - (a.getFixedPointX() - b.getFixedPointX()) * (point.getFixedPointY() - b.getFixedPointY()));
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    float ar1, ar2, ar3;
    bool negative ,positive;
    if ((point == a) || (point == b) || (point == c))
        return (false);
    ar1 = calcVec(a, b, point);
    ar2 = calcVec(b, c, point);
    ar3 = calcVec(c, a, point);
    negative = (ar1 < 0) || (ar2 < 0) || (ar3 < 0);
    positive = (ar1 > 0) || (ar2 > 0) || (ar3 < 0);
    return (!(negative && positive));
}