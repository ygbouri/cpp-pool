/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 01:50:31 by ygbouri           #+#    #+#             */
/*   Updated: 2023/04/14 02:47:59 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include <algorithm>
#include <iterator>
#include <string>
#include <fstream>
#include <ctype.h> 
#include <string.h> 
#include <stdlib.h>
#include <vector>
#include <deque>
#include <sys/time.h>

template <typename T>
void insertsort(T& v, int l , int r);

template <typename T>
void mergeallpart(T&v, int l, int r, int demi);

template <typename T>
void mergerinsertionsort(T& v, int l, int r);

double	timeph(void);

int pmergeme(int ar, char **arg);