/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 15:30:08 by ygbouri           #+#    #+#             */
/*   Updated: 2022/11/10 18:02:05 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


PhoneBook::PhoneBook(void)
{

}
bool PhoneBook::check(Contact c1)
{
	if (c1.getFirstName().empty() || c1.getLastName().empty() || c1.getNickName().empty() ||
	   c1.getPhoneNum().empty() || c1.getDarksetSecret().empty())
		return (false);
	return (true);
}

int PhoneBook::addconta(Contact c1)
{
	if (check(c1))
	{
		if (c1.getId() > 0 && c1.getId() <= 8)
			this->tabCont[c1.getId() - 1] = c1;
		std::cout << "Contact has been successfully saved" << std::endl;
		return (1);
	}
	else
		std::cout << "the contact wasn't saved" << std::endl;
	return (0);
}

void	PhoneBook::affichTen(std::string str)
{
	int j;

	j = 0;
	while (j < 10)
	{
		if (j < 9)
			std::cout << str[j];
		else
			std::cout << '.';
		j++;
	}
}

void	PhoneBook::findContact(int index)
{
	int	i;

	i = 0;
	while (i < 8)
	{
		if (tabCont[i].getId() == index)
		{
			std::cout << "****Contact exist****" << std::endl;
			std::cout << tabCont[i].getId() << "|";
			if (this->tabCont[i].getFirstName().length() < 10)
				std::cout << tabCont[i].getFirstName();
			else
				affichTen(tabCont[i].getFirstName());
			std::cout << "|";
			if (this->tabCont[i].getLastName().length() < 10)
				std::cout << tabCont[i].getLastName();
			else
				affichTen(tabCont[i].getLastName());
			std::cout << "|";
			if (this->tabCont[i].getNickName().length() < 10)
				std::cout << tabCont[i].getNickName();
			else
				affichTen(tabCont[i].getNickName());
			return ;
		}
		i++;
	}
	if (i == 8)
		std::cout << "Contact not found";
}

void	PhoneBook::searchconta(int index)
{
	int	i;

	i = 0;
	std::cout << "index|firstname|lastname|nickname " << std::endl;
	while (i < 8)
	{
		if (tabCont[i].getId() > 0)
		{
			std::cout << tabCont[i].getId() << "|";
			if (tabCont[i].getFirstName().length() < 10)
				std::cout << tabCont[i].getFirstName();
			else
				affichTen(tabCont[i].getFirstName());
			std::cout << "|";
			if (this->tabCont[i].getLastName().length() < 10)
				std::cout << tabCont[i].getLastName();
			else
				affichTen(tabCont[i].getLastName());
			std::cout << "|";
			if (this->tabCont[i].getNickName().length() < 10)
				std::cout << tabCont[i].getNickName();
			else
				affichTen(tabCont[i].getNickName());
			std::cout << std::endl;
		}
		i++;
	}
	std::cout << std::endl;

}
