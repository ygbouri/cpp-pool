/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 20:53:56 by ygbouri           #+#    #+#             */
/*   Updated: 2023/04/14 02:51:25 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
 


int main(int ar, char **arg)
{
	if (ar == 2)
	{
		bitcoin(ar, arg);
	}
	else
		std::cout << "Error: could not open file."<< std::endl;
	return 0;
}
