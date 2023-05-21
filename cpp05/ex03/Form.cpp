/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 12:16:04 by ygbouri           #+#    #+#             */
/*   Updated: 2022/11/18 16:02:21 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form():name(""),gradesi(0), gradeex(0), indicate(false)
{
	std::cout << "Default constructor of Form" << std::endl;
}

Form::Form(std::string name, int gradesi , int gradeex, bool indi):name(name),gradesi(gradesi), gradeex(gradeex), indicate(indi)
{
	std::cout << "Constructor personalized" << std::endl;
}

Form::Form(const Form& ob):name(ob.getName()), indicate(false), gradesi(ob.getGradeSigne()) , gradeex(ob.getGradeExec())
{
	try
	{
		if (this->gradesi < 1 || this->gradeex < 1)
		{
			Form::GradeTooHighException e;
			throw e;
		}
	}
	catch(Form::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		if (this->gradesi > 150 || this->gradeex > 150)
		{
			Form::GradeTooHighException e;
			throw e;
		}
	}
	catch(Form::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

Form& Form::operator=(const Form& ob)
{
	if (this != &ob)
	{
		*this = ob;
	}
	return (*this);
}

std::string const Form::getName() const
{
	return (this->name);
}

bool Form::getIndicate() const
{
	return (this->indicate);
}

const int Form::getGradeSigne() const
{
	return(this->gradesi);
}

const int Form::getGradeExec() const
{
	return (this->gradeex);
}

void Form::beSigned(Bureaucrat& ob)
{
	try
	{
		if (ob.getGrade() >= this->getGradeSigne())
		{
			Form::GradeTooLowException e;
			throw e;
		}
		this->indicate = true;
	}
	catch(Form::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
	}
}


Form::~Form()
{
	std::cout << "Default destructor of Form" << std::endl;
}

void Form::execute(Bureaucrat const &executor) const
{
	try
	{
		if (executor.getGrade() >= this->getGradeExec())
		{
			Form::GradeTooLowException e;
			throw e;
		}
		this->action();
	}
	catch(Form::GradeTooLowException& e)
	{
		std::cerr << e.what() << '\n';
	}
}

const char* Form::GradeTooHighException::what()
{
	return ("grade is too high for Form");
}

const char* Form::GradeTooLowException::what()
{
	return ("grade is too low for Form");
}


std::ostream& operator<<(std::ostream &out , const Form& ob)
{
	out <<"Name of Form is " << ob.getName() << " and grade signe is" << ob.getGradeSigne() << " and grade execute is " << ob.getGradeExec() << "is signed is ? " << ob.getIndicate();
	return (out);
}
