/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:19:40 by ygbouri           #+#    #+#             */
/*   Updated: 2022/11/11 13:08:24 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main (int ar, char **arg)
{
	std::string str, str1, s1,s2;
	size_t index = 0, i = 0, j;
	if (ar == 4)
	{
		std::ifstream fin;
		std::ofstream fout;
		fin.open(arg[1]);
		if (fin.fail())
		{
			std::cout << "error in file wasn't opened";
			exit(1);
		}
		s1 = arg[2];
		s2 = arg[3];
		if (s1.length() == 0 || s2.length() == 0)
			return (0);
		getline(fin, str, '\0');
		j = s1.length();
		while(((index = str.find(s1, i)) != std::string::npos) && s1.compare(s2) != 0)
		{
			str = str.substr(0, index) + s2 + str.substr(index + j, -1);
			i = index + s2.length();
		}
		std::string filereplace = arg[1];
		fout.open(filereplace.append(".replace"));
		if (fout.fail())
		{
			std::cout << "error in file wasn't opened" << std::endl;
			exit(1);
		}
		fout << str;
	}
	else
		std::cout << "should be enter 4 arguments" << std::endl;
	return (0);
}
