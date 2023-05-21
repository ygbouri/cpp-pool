/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 19:01:33 by ygbouri           #+#    #+#             */
/*   Updated: 2022/11/12 13:10:09 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>
class Fixed
{
    private:
        int nbr;
        static const int frac = 8;
    public:
        Fixed();
        Fixed(const Fixed &f);
        Fixed(float nom);
        Fixed(int nom);
        Fixed & operator = (const Fixed &f);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits (int const raw);
        float toFloat( void ) const;
        int toInt( void ) const;
};
std::ostream& operator<<(std::ostream &out, const Fixed &ob);
#endif
