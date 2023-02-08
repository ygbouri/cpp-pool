/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 12:16:01 by ygbouri           #+#    #+#             */
/*   Updated: 2022/11/18 15:25:58 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
#define FORM_H

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string name;
		bool indicate;
		const int gradesi;
		const int gradeex;
	public:
		Form();
		Form(const Form& ob);
		Form& operator=(const Form& ob);
		Form(std::string name, int gradesi, int gradeex, bool indi);
		~Form();
		class GradeTooHighException:public std::exception
		{
			public:
				const char * what()
				{
					return ("grade is too high for Form");
				}
		};

		class GradeTooLowException:public std::exception
		{
			public:
				const char * what()
				{
					return ("grade is too low for Form");
				}
		};
		std::string const getName( void ) const;
		bool getIndicate() const;
		const int getGradeSigne() const;
		const int getGradeExec() const;
		void beSigned(Bureaucrat& ob);
};

std::ostream& operator<<(std::ostream& out, const Form& ob);

#endif
