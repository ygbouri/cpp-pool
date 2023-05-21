/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 20:04:14 by ygbouri           #+#    #+#             */
/*   Updated: 2022/11/18 15:22:02 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat(std::string name, int grade):name(name), grade(grade)
{
	try
	{
		if (this->grade < 1)
		{
			Bureaucrat::GradeTooHighException e;
			throw  e;
		}
	}
	catch(Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		if (this->grade > 150)
		{
			Bureaucrat::GradeTooLowException e;
			throw  e;
		}
	}
	catch(Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() <<std::endl;
	}
	std::cout << "Personalized constructor" << std::endl;
}

Bureaucrat::Bureaucrat():name("")
{
	this->grade = 5;
	std::cout << "Default Constructor" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& ob)
{
	Bureaucrat *temp;
	try
	{
		if (this->grade < 1)
		{
			Bureaucrat::GradeTooHighException e;
			throw e;
		}
		else if (this->grade > 150)
		{
			Bureaucrat::GradeTooLowException e;
			throw e;
		}
		temp = new Bureaucrat(ob.name, ob.grade);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (*temp);
}

Bureaucrat::Bureaucrat(const Bureaucrat& ob):name(ob.name), grade(ob.grade)
{
	try
	{
		if (this->grade < 1)
		{
			Bureaucrat::GradeTooHighException e;
			throw e;
		}

	}
	catch(Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		if (this->grade > 150)
		{
			Bureaucrat::GradeTooLowException e;
			throw e;
		}
	}
	catch(Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
	}

}

int Bureaucrat::getGrade() const
{
	return (this->grade);
}

void Bureaucrat::setGrade(int a)
{
	this->grade = a;
}

std::string Bureaucrat::getName() const
{
	return(this->name);
}

void Bureaucrat::increment()
{
	try
	{
		if (this->grade < 1)
		{
			Bureaucrat::GradeTooHighException e;
			throw e;
		}
		this->grade--;
	}
	catch(Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what() << '\n';
	}

}

void Bureaucrat::decrement()
{
	try
	{
		if (this->grade > 150)
		{
			Bureaucrat::GradeTooLowException e;
			throw e;
		}
		this->grade++;
	}
	catch(Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << '\n';
	}

}

const char* Bureaucrat::GradeTooHighException::what()
{
	return ("grade is too high");
}

const char* Bureaucrat::GradeTooLowException::what()
{
	return ("grade is too low");
}
std::ostream& operator<<(std::ostream &out , const Bureaucrat& ob)
{
	out << ob.getName() << ", bureaucrat grade " << ob.getGrade();
	return (out);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Default destructor of Bureaucrat" << std::endl;
}
