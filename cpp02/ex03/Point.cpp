/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 14:52:12 by ygbouri           #+#    #+#             */
/*   Updated: 2022/10/31 15:22:00 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point()
{
    this->setFixedPointX(this->x);
    this->setFixedPointY(this->y);
}

Point::Point(Fixed x, Fixed y)
{
    this->x = x;
    this->y = y;
}

Point& Point::operator=(const Point& ob)
{
    this->x = ob.x;
    this->y = ob.y;
    return (*this);
}

Point::Point(const Point &ob)
{
    *this = ob;
}


float Point::getFixedPointX() const
{
    float b = this->x.toFloat();
    return (b);
}

float Point::getFixedPointY() const
{
    float b = this->y.toFloat();
    return (b);
}

void Point::setFixedPointX(Fixed x)
{
    this->x = x;
}

void Point::setFixedPointY(Fixed y)
{
    this->y = y;   
}

bool Point::operator==(Point const &ob) const
{
    if (this->x == ob.x && this->y == ob.y)
        return (true);
    return (false);
}

Point::~Point()
{
}
