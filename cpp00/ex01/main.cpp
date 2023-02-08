/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:38:19 by ygbouri           #+#    #+#             */
/*   Updated: 2022/11/10 18:03:41 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int checkcommand(std::string str)
{
	if (str.compare("ADD") == 0)
		return (0);
	if (str.compare("SEARCH") == 0)
		return (1);
	if (str.compare("EXIT") == 0)
		return (2);
	return (-1);
}

Contact   addcontact(int i, PhoneBook ph)
{
	t_con   conta;

	std::cout << "enter first name: ";
	std::getline(std::cin, conta.first);
	std::cout << std::endl;
	std::cout << "enter last name: ";
	std::getline(std::cin, conta.last);
	std::cout << std::endl;
	std::cout << "enter nickname: ";
	std::getline(std::cin, conta.nick);
	std::cout << std::endl;
	std::cout << "enter numberphone: ";
	std::getline(std::cin, conta.number);
	std::cout << std::endl;
	std::cout << "enter darkset: ";
	std::getline(std::cin, conta.dark);
	std::cout << std::endl;
	Contact c(i, conta.first, conta.last, conta.nick, conta.number, conta.dark);
	return (c);
}

int	sea(PhoneBook ph)
{
	std::string str;
	int	id;

	std::cout << "enter id of contact : ";
	std::getline(std::cin , str);
	id = atoi(str.c_str());
	if (id == 0)
	{
		std::cout << "wrong id" << std::endl;
		return (0);
	}
	return (id);
}

int main(void)
{
	PhoneBook ph;
	std::string  str;
	Contact	c;
	int		id;
	int 	i;
	std::cout << "PhoneBook" << std::endl << "ADD : save a new contact" << std::endl
		<< "SEARCH : display specific contact" << std::endl
		<< "EXIT : quit the program" << std::endl;
	i = 1;
	while (std::cin.good())
	{
		std::cout << "enter one of three command :" << std::endl;
		getline(std::cin, str);
		if (checkcommand(str) == 0)
		{
			c = addcontact(i, ph);
			if (ph.addconta(c) == 1)
				i++;
		}
		else if (checkcommand(str) == 1)
		{
			ph.searchconta(id);
			id = sea(ph);
			if (id != 0)
				ph.findContact(id);
			std::cout << std::endl;
		}
		else if (checkcommand(str) == 2)
			exit(0);
		if (i == 9)
			i = 1;
	}
}
