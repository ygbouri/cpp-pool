/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 23:18:55 by ygbouri           #+#    #+#             */
/*   Updated: 2022/11/18 16:04:32 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "Default constructor of Intern" << std::endl;
}

Intern::Intern(const Intern& ob)
{
    *this = ob;
    std::cout << "Personalized constructor" << std::endl;
}

Intern& Intern::operator=(const Intern& ob)
{
    if (this != &ob)
        *this = ob;
    return (*this);
}

Intern::~Intern()
{
    std::cout << "Default constructor" << std::endl;
}

const char* Intern::explicitMessage::what()
{
    return "there is no Classe with this name";
}

Form* Intern::makeForm(std::string name, std::string target)
{
    int i = ((name == "Shrubbery") * 0) + ((name == "Robotomy") * 1) + ((name == "Presidential") * 2);
    int j = ((name != "Shrubbery") && (name != "Robotomy") && (name != "Presidential")) * 3;
    while (j == 3)
    {
        i = j;
        break;
    }
    try
    {
        switch(i)
        {
            case 0:
                return (new ShrubberyCreationForm(name, target));
            case 1:
                return (new RobotomyRequestForm(name, target));
            case 2:
                return (new PresidentialPardonForm(name, target));
            default:
            {
                Intern::explicitMessage e;
                throw e;
            }
        }
    }
    catch(Intern::explicitMessage e)
    {
        std::cout << e.what() << std::endl;
    }
    return (NULL);
}
