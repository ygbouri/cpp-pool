/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 22:35:34 by ygbouri           #+#    #+#             */
/*   Updated: 2023/04/13 22:14:11 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include <algorithm>
#include <iterator>
#include <stack>
#include <string>
#include <fstream>
#include <ctype.h> 
#include <string.h> 
#include <stdlib.h> 

std::string trim(std::string str, const char * space);
int calculer(int nb1, int nb2, char op);
int rpn(int ar, char **arg);
