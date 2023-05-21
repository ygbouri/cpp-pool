/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:32:51 by ygbouri           #+#    #+#             */
/*   Updated: 2022/11/12 12:54:58 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed
{
    private:
        int nbr;
        static const int frac = 8;
    public:
        Fixed();
        Fixed(const Fixed &f);
        Fixed & operator = (const Fixed &f);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits (int const raw);
};
#endif
