/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 14:17:12 by ygbouri           #+#    #+#             */
/*   Updated: 2022/11/12 14:06:34 by ygbouri          ###   ########.fr       */
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
        bool operator >(const Fixed &ob);
        bool operator <(const Fixed &ob);
        bool operator >=(const Fixed &ob);
        bool operator <=(const Fixed &ob);
        bool operator ==(const Fixed &ob);
        bool operator !=(const Fixed &ob);
        Fixed& operator +(const Fixed &ob);
        Fixed& operator -(const Fixed &ob);
        Fixed& operator *(const Fixed &ob);
        Fixed& operator /(const Fixed &ob);
        Fixed& operator ++ ();
        Fixed operator ++ (int);
        static Fixed& min(Fixed &a, Fixed &b);
        static const  Fixed& min(const Fixed &a, const Fixed &b);
        static Fixed& max(Fixed &a, Fixed &b);
        static const Fixed& max(const Fixed &a, const Fixed &b);
};
std::ostream& operator<<(std::ostream &out, const Fixed &ob);
#endif
