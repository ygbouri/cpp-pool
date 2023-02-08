/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 14:52:15 by ygbouri           #+#    #+#             */
/*   Updated: 2022/10/31 13:57:37 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
#define POINT_H

#include <iostream>
#include "Fixed.hpp"

class Point
{
	private:
		Fixed x;
		Fixed y;
	public:
		Point();
		Point(Fixed px, Fixed py);
		Point(const Point &ob);
		Point& operator=(const Point &ob);
		bool   operator==(const Point &ob) const;
		~Point();
		float	getFixedPointX() const;
		float 	getFixedPointY() const;
		void	setFixedPointX(Fixed ob);
		void    setFixedPointY(Fixed ob);
};

bool bsp(Point const a, Point const b, Point const c, Point const point);
#endif