/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:32:48 by ygbouri           #+#    #+#             */
/*   Updated: 2022/11/12 13:03:15 by ygbouri          ###   ########.fr       */
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
    std::cout << "Copy assignment operator called" << std::endl;
   this->nbr = a.getRawBits();
   return (*this);
}

Fixed::Fixed(const Fixed &f)
{
    std::cout<< "Copy constructor called" << std::endl;
    *this = f;
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
