/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 15:40:06 by ygbouri           #+#    #+#             */
/*   Updated: 2022/11/10 18:24:49 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ar, char **arg)
{
	int 	i;
	int		j;
	char	c;

	i = 1;
	if (ar > 1)
	{
		while (arg[i])
		{
			j = 0;
			while (arg[i][j])
			{
				c = toupper(arg[i][j]);
				std::cout << c;
				j++;
			}
			i++;
		}
		std::cout << std::endl;

	}
	else if (ar == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}
