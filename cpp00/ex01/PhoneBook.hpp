/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 10:40:30 by ygbouri           #+#    #+#             */
/*   Updated: 2022/11/07 11:23:54 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

# include <iostream>
# include <string>
# include <sstream>
# include "Contact.hpp"

class   PhoneBook
{
	public:
		Contact tabCont[8];

		PhoneBook();
		int    addconta(Contact c1);
		void    searchconta(int cin);
		void	affichTen(std::string str);
		void	findContact(int index);
		bool    check(Contact c2);
};

typedef struct con
{
	std::string	first;
	std::string	last;
	std::string	nick;
	std::string	dark;
	std::string	number;
}				t_con;

#endif
