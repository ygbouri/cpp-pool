/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:33:26 by ygbouri           #+#    #+#             */
/*   Updated: 2022/11/07 10:55:23 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define  CONTACT_H

#include <string>
# include <iostream>
# include <string>
# include <sstream>

class   Contact
{
	private:
		int     id;
		int     count;
		std::string  first_Name;
		std::string  last_Name;
		std::string  nick_Name;
		std::string  phone_Number;
		std::string  darkest_Secret;

	public:
		Contact();
		Contact(int id, std::string f, std::string l, std::string n, std::string ph, std::string da);
		int	getId( void );
		int getCount( void );
		std::string getFirstName(void);
		std::string getLastName(void);
		std::string getNickName(void );
		std::string getPhoneNum(void);
		std::string getDarksetSecret(void);
		void setId(int id);
		void setCount(int count);
		void setFirstName(std::string first);
		void setLastName(std:: string last);
		void setNickName(std::string nick);
		void setPhoneNum(std::string phone);
		void setDarksetSecret(std::string dark);
};

#endif
