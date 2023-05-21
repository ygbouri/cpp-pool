/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 19:12:36 by ygbouri           #+#    #+#             */
/*   Updated: 2022/10/17 16:55:55 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H__
#define ZOMBIE_H__

#include <iostream>


class Zombie
{
	private:
		std::string _name;
	public:
		void		announce( void );
		std::string getName( void );
		void		setName( std::string name );
		Zombie (std::string name);
		Zombie ();
		~Zombie();
};
Zombie* zombieHorde( int N, std::string name);
#endif