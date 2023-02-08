/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 14:51:56 by ygbouri           #+#    #+#             */
/*   Updated: 2022/10/31 13:58:23 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    this->nbr = 0;
}

Fixed &Fixed::operator = ( const Fixed &a)
{
   this->nbr = a.getRawBits();
   return (*this); 
}

Fixed::Fixed(const Fixed &f)
{
    *this = f;
}

Fixed::Fixed(float nom)
{
    this->nbr = roundf(nom * 256);
}

Fixed::Fixed(int nom)
{
    this->nbr = nom << this->frac;
}

float Fixed::toFloat() const
{
    return((this->nbr / 256.0));
}

int Fixed::toInt() const
{
    return (this->nbr >> this->frac);
}

int Fixed::getRawBits() const
{
    return (this->nbr);
}

void Fixed::setRawBits(int const raw)
{
    this->nbr = raw;
}

Fixed::~Fixed()
{
    
}

std::ostream& operator << (std::ostream &out, const Fixed &a)
{
    out << a.toFloat();
    return (out);
}

bool Fixed::operator >(const Fixed &ob)
{
    if (this->getRawBits() > ob.getRawBits())
        return (true);
    return (false);
}

bool Fixed::operator <(const Fixed &ob)
{
    if (this->getRawBits() < ob.getRawBits())
        return (true);
    return (false);
}

bool Fixed::operator >=(const Fixed &ob)
{
    if (this->getRawBits() >= ob.getRawBits())
        return (true);
    return (false);
}

bool Fixed::operator <=(const Fixed &ob)
{
    if (this->getRawBits() <= ob.getRawBits())
        return (true);
    return (false);
}

bool Fixed::operator ==(const Fixed &ob) const
{
    if (this->getRawBits() == ob.getRawBits())
        return (true);
    return (false);
}

bool Fixed::operator !=(const Fixed &ob)
{
    if (this->getRawBits() != ob.getRawBits())
        return (true);
    return (false);
}

Fixed& Fixed::operator++()
{ 
    ++this->nbr;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed temp = *this;
    this->nbr++;
    return (temp);
}

Fixed& Fixed::operator+(const Fixed &ob)
{
    this->nbr = this->nbr + ob.nbr; 
    return (*this);
}

Fixed& Fixed::operator-(const Fixed &ob)
{
    this->nbr = this->nbr - ob.nbr; 
    return (*this);
}

Fixed& Fixed::operator*(const Fixed &ob)
{
    this->nbr *= ob.nbr;
    this->nbr = this->toFloat();
    return (*this);
}

Fixed& Fixed::operator/(const Fixed &ob)
{
    this->nbr = this->toFloat() / ob.toFloat(); 
    return (*this);
}

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
    if (a < b)
        return (a);
    return (b);
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a.getRawBits() < b.getRawBits())
        return (a);
    return (b);
    
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
    if (a > b)
        return (a);
    return (b);
}

 const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
    if(a.getRawBits() > b.getRawBits())
        return (a);
    return (b);
}
