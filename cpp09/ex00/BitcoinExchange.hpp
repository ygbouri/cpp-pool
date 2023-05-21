/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 21:10:25 by ygbouri           #+#    #+#             */
/*   Updated: 2023/04/14 02:53:34 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include <algorithm>
#include <iterator>
#include <map>
#include <string>
#include <fstream>
#include <ctype.h> 
#include <string.h> 
#include <stdlib.h> 

std::string trim(std::string str, const char * space);
std::map<std::string , std::string> filldatafdatacsv();
int parsemonth2(std::string year, std::string month, std::string day);
int parsemonthsanddays(std::string year, std::string month, std::string day);
int checkdateandvalue2(std::string year, std::string month ,std::string day, std::string value);
int	checkdateandvalue(std::map<std::string , std::string > datacsv, std::string date, std::string value, int j);
int bitcoin(int ar, char** arg);