/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 12:21:11 by ygbouri           #+#    #+#             */
/*   Updated: 2022/11/11 13:38:12 by ygbouri          ###   ########.fr       */
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
