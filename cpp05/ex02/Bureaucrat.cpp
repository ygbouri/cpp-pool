/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 20:04:14 by ygbouri           #+#    #+#             */
/*   Updated: 2022/11/18 15:52:33 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat(std::string name, int grade):name(name), grade(grade)
{
	try
	{
		if (this->grade < 0)
		{
			Bureaucrat::GradeTooHighException e;
			throw  e;
		}
		std::cout << "Default Constructor" << std::endl;
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


}

Bureaucrat::Bureaucrat()
{

}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& ob)
{
	Bureaucrat *temp;
	try
	{
		if (this->grade < 0)
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
		if (this->grade < 0)
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
		std::cerr << e.what() << std::endl;
	}
}

void Bureaucrat::decrement()
{
	try
	{
		if (this->grade >= 150)
		{
			Bureaucrat::GradeTooLowException e;
			throw e;
		}
		this->grade++;
	}
	catch(Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
	}

}

std::ostream& operator<<(std::ostream &out , const Bureaucrat& ob)
{
	out << ob.getName() << ", bureaucrat grade " << ob.getGrade();
	return (out);
}

void Bureaucrat::signForm(Form& f)
{
	Bureaucrat& b = *this;
	if (f.getIndicate())
		std::cout << this->getName() << " signed " << f.getName() << std::endl;
	else
	{
		std::cout << this->getName() << " couldn't sign " << f.getName() << " because ";
		f.beSigned(b);
	}
}


void Bureaucrat::executeForm(Form const & form)
{
	try
	{
		form.execute(*this);
		std::cout << this->getName() << " executed " << form.getName() << std::endl;
	}
	catch(Form::GradeTooLowException e)
	{
		std::cout << e.what() << " and Form wasn't execute " << std::endl;
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

const char * Bureaucrat::noExecute::what()
{
	return ("no executed");
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Default destructor of Bureaucrat" << std::endl;
}


