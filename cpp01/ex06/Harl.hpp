/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 18:49:21 by ygbouri           #+#    #+#             */
/*   Updated: 2022/11/19 14:22:18 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
#define HARL_H

# include <iostream>

class Harl
{
    private:
        void debug( void );
        void info( void );
        void warning( void );
        void error ( void );
        void other ( void );
    public:
        void complain(std::string level);
};
#endif