/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:18:12 by ygbouri           #+#    #+#             */
/*   Updated: 2022/10/20 11:37:41 by ygbouri          ###   ########.fr       */
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
		// Zombie* 	newZombie( std::string name );
		// void    	randomChump( std::string name );
		std::string getName( void );
		Zombie (std::string name);
		Zombie ();
		~Zombie();
};
Zombie* 	newZombie( std::string name );
void    	randomChump( std::string name );

#endif