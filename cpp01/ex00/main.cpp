/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 19:09:16 by ygbouri           #+#    #+#             */
/*   Updated: 2022/11/11 12:44:21 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *zom;
	std::string name = "zombie 1";
	zom = newZombie(name);
	if (!zom)
	{
		std::cout << "name is NULL" << std::endl;
		return(0);
	}
	zom->announce();
	randomChump("zombie 2");
	delete zom;
	return (0);
}
