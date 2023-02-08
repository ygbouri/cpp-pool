/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 20:04:17 by ygbouri           #+#    #+#             */
/*   Updated: 2022/11/18 15:21:48 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>

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
		void setGrade(int a);
		void increment(void);
		void decrement(void);
		class GradeTooHighException:public std::exception
		{
			public:
				const char * what();
				
		};
		
		class GradeTooLowException:public std::exception
		{
			public:
				const char * what();
		};
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& ob);
#endif
