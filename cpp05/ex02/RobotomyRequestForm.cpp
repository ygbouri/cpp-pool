/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 19:38:50 by ygbouri           #+#    #+#             */
/*   Updated: 2022/11/18 16:03:37 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():Form("", 72, 45, false)
{
	std::cout <<"Default constructor of RobotomyRequestForm"<< std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& ob)
{
		*this = ob;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target, std::string name):Form(name, 72,45,false)
{
	this->target = target;
	std::cout <<"Custom constructor"<< std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target):Form("", 72,45,false)
{
	this->target = target;
	std::cout <<"Custom constructor"<< std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &ob)
{
	if (this != &ob)
	{
		*this = ob;
	}
	return (*this);
}

std::string RobotomyRequestForm::getTarget() const
{
	return (this->target);
}

void RobotomyRequestForm::action() const
{
	srand(time(NULL));
	if (rand() % 2 == 0)
		std::cout << this->getTarget() <<" has been successfully executed"<<  std::endl;
	else
		std::cout << this->getTarget() <<" not executed "<<  std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Default desstructor of RobotomyRequestForm" << std::endl;
}
