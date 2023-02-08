/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 19:01:30 by ygbouri           #+#    #+#             */
/*   Updated: 2022/11/12 16:22:48 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    this->nbr = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed &Fixed::operator = ( const Fixed &a)
{
    std::cout << "copy assignment operator called" << std::endl;
   this->nbr = a.getRawBits();
   return (*this);
}

Fixed::Fixed(const Fixed &f)
{
    std::cout<< "Copy constructor called" << std::endl;
    *this = f;
}

Fixed::Fixed(float nom)
{
    this->nbr = roundf(nom * 256.0);
    std::cout << "float constructor nbr "<< this->nbr << std::endl;
    std::cout << "Float constructor called" << std::endl;
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
    std::cout << "getRawBits member function called" << std::endl;
    return (this->nbr);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->nbr = raw;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

std::ostream& operator << (std::ostream &out, const Fixed &a)
{
    out << a.toFloat();
    return (out);
}
