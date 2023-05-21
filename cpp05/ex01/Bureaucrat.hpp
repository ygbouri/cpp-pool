/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 20:04:17 by ygbouri           #+#    #+#             */
/*   Updated: 2022/11/13 18:17:17 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>
#include "Form.hpp"

class Form;
class Bureaucrat
{
	std::string const name;
	int grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		~Bureaucrat(void);
		Bureaucrat& operator=(const Bureaucrat& ob);
		Bureaucrat(const Bureaucrat& ob);
		int getGrade(void) const;
		std::string getName(void) const;
		void increment(void);
		void decrement(void);
		void signForm(Form& f);
		class GradeTooHighException:public std::exception
		{
			public:
				const char * what()
				{
					return ("grade is toohigh");
				}
		};
		class GradeTooLowException:public std::exception
		{
			public:
				const char * what()
				{
					return ("grade is toolow");
				}
		};
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& ob);
#endif
