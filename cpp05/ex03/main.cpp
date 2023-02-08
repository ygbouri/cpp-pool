/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 20:04:19 by ygbouri           #+#    #+#             */
/*   Updated: 2022/11/18 15:45:14 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{
	Bureaucrat bu = Bureaucrat("youssef", 40);
	std::cout << bu << std::endl;
	bu.increment();
	bu.increment();
	bu.increment();
	bu.increment();
	bu.increment();
	std::cout << "increment " << bu << std::endl;
	bu.decrement();
	bu.decrement();
	bu.decrement();
	bu.decrement();
	bu.decrement();
	bu.decrement();
	bu.decrement();
	bu.decrement();
	bu.decrement();
	bu.decrement();
	bu.decrement();
	bu.decrement();
	bu.decrement();
	bu.decrement();
	bu.decrement();

	Bureaucrat &c = bu;
	std::cout << bu << std::endl;
	std::cout <<  bu.getName() << ", bureaucrat grade " << bu.getGrade() << std::endl;
	Form *s = new ShrubberyCreationForm("treefile", "shrubbery");
	Form *s1 = new RobotomyRequestForm("robot", "shrubbery");
	Form *s2 = new PresidentialPardonForm("president", "shrubbery");
	try
	{
		s->execute(c);
	}
	catch(Form::GradeTooLowException e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		s1->execute(c);
	}
	catch(Form::GradeTooLowException e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		s2->execute(c);
	}
	catch(Form::GradeTooLowException e)
	{
		std::cerr << e.what() << std::endl;
	}
	Form &a = *s;
	bu.executeForm(a);
	Intern someRandomIntern;
	Form* rrf;
	try
	{
		rrf = someRandomIntern.makeForm("gggg", "Bender");
		if (rrf != NULL)
		{
			rrf->execute(c);
			delete rrf;
		}
		else
		{
			Intern::explicitMessage e;
			throw e;
		}
	}
	catch(Intern::explicitMessage e)
	{
		std::cout << "rrf is NULL because " << e.what() << std::endl;
	}
	delete s;
	delete s1;
	delete s2;
}
