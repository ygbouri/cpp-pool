/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 19:38:55 by ygbouri           #+#    #+#             */
/*   Updated: 2022/11/18 14:00:43 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
	std::cout <<"Default constructor of Shrubbery"<< std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& ob):Form(ob)
{
	this->target = ob.target;
	std::cout << "Copy constructor of Shrubbery" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& ob)
{
	ShrubberyCreationForm *temp;
	if (this != &ob)
	{
		temp = new ShrubberyCreationForm(ob);
		temp->target = target;
	}
	return (*temp);
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target, std::string name):Form(name, 145, 137, false)
{
	this->target = target;
	std::cout << "Personalized constructor" <<std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):Form("", 145, 137, false)
{
	this->target = target;
	std::cout << "Personalized constructor" <<std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Default destructor of Shrubbery" << std::endl;
}

std::string ShrubberyCreationForm::getTarget() const
{
	return (this->target);
}

void ShrubberyCreationForm::action() const
{
	std::ofstream out;

	out.open(this->getTarget().append("_shrubbery"));
	if (out.fail())
	{
		std::cout << "error in file wasn't opened" << std::endl;
		return ;
	}
	out << tree;
}
