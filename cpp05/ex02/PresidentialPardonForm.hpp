/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 19:38:47 by ygbouri           #+#    #+#             */
/*   Updated: 2022/11/18 14:07:21 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"

class PresidentialPardonForm:public Form
{
    private:
        std::string target;
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(const PresidentialPardonForm& ob);
        PresidentialPardonForm& operator=(const PresidentialPardonForm& ob);
        PresidentialPardonForm(std::string target, std::string name);
        PresidentialPardonForm(std::string target);
        void action(void)const ;
		std::string getTarget(void) const;
        ~PresidentialPardonForm();
};