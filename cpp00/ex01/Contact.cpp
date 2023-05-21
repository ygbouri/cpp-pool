/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:43:05 by ygbouri           #+#    #+#             */
/*   Updated: 2022/11/07 10:58:04 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(int id, std::string f, std::string l, std::string n, std::string ph, std::string da)
{
	this->id = id;
	this->first_Name = f;
	this->last_Name = l;
	this->nick_Name = n;
	this->phone_Number = ph;
	this->darkest_Secret = da;
	this->count++;
}

Contact::Contact()
{

}

int Contact::getId()
{
	return (this->id);
}

int Contact::getCount()
{
	return (this->count);
}

std::string Contact::getFirstName()
{
	return (this->first_Name);
}

std::string Contact::getLastName()
{
	return (this->last_Name);
}

std::string Contact::getNickName()
{
	return (this->nick_Name);
}

std::string Contact::getPhoneNum()
{
	return (this->phone_Number);
}

std::string Contact::getDarksetSecret()
{
	return (this->darkest_Secret);
}

void Contact::setId(int id)
{
	this->id = id;
}

void Contact::setCount(int count)
{
	this->count = count;
}

void Contact::setFirstName(std::string first)
{
	this->first_Name = first;
}

void Contact::setLastName(std::string last)
{
	this->last_Name = last;
}

void Contact::setNickName(std::string nick)
{
	this->nick_Name = nick;
}

void Contact::setPhoneNum(std::string phone)
{
	this->phone_Number = phone;
}

void Contact::setDarksetSecret(std::string dark)
{
	this->darkest_Secret = dark;
}
