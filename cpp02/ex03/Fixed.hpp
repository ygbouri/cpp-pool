/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 14:52:07 by ygbouri           #+#    #+#             */
/*   Updated: 2022/10/31 13:58:02 by ygbouri          ###   ########.fr       */
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
        friend std::ostream& operator<<(std::ostream &out, const Fixed &ob);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits (int const raw);
        float toFloat( void ) const;
        int toInt( void ) const;
        bool operator >(const Fixed &ob);//now
        bool operator <(const Fixed &ob);
        bool operator >=(const Fixed &ob);
        bool operator <=(const Fixed &ob);
        bool operator ==(const Fixed &ob) const;
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
#endif