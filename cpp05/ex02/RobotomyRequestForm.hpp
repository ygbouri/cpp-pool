/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 19:38:52 by ygbouri           #+#    #+#             */
/*   Updated: 2022/11/18 14:09:49 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM_H
#define ROBOTOMY_REQUEST_FORM_H
#include "Form.hpp"

class RobotomyRequestForm: public Form
{
	private:
		std::string target;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm& ob);
		RobotomyRequestForm& operator=(const RobotomyRequestForm& ob);
		RobotomyRequestForm(std::string target, std::string name);
		RobotomyRequestForm(std::string target);
		void action(void)const ;
		std::string getTarget(void) const;
		~RobotomyRequestForm();
};

#endif