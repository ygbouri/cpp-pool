/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 19:38:44 by ygbouri           #+#    #+#             */
/*   Updated: 2022/11/18 16:02:50 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():Form("", 25, 5, false)
{
    std::cout << "Default constructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& ob)
{
    *this = ob;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target, std::string name):Form(name, 25,5,false)
{
	this->target = target;
	std::cout <<"Custom constructor"<< std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target):Form("", 25, 5,false)
{
	this->target = target;
	std::cout <<"Custom constructor"<< std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &ob)
{
	if (this != &ob)
	{
		*this = ob;
	}
	return (*this);
}

std::string PresidentialPardonForm::getTarget() const
{
	return (this->target);
}

void PresidentialPardonForm::action() const
{
    std::cout << this->getTarget() << "has been Zaphod Beeblobrox" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Default desstructor of PresidentialPardonForm" << std::endl;
}