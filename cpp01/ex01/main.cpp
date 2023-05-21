/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:17:32 by ygbouri           #+#    #+#             */
/*   Updated: 2022/11/11 12:50:00 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *z = zombieHorde(5, "brainz");
	for(int i = 0; i < 5; i++)
	{
		z[i].announce();
	}
	delete[] z;
	return (0);
}