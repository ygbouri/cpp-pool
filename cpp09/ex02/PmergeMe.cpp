/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 02:09:59 by ygbouri           #+#    #+#             */
/*   Updated: 2023/04/14 02:47:43 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

double	timeph(void)
{
	struct timeval	current_time;
	double			tenmilli;

	gettimeofday(&current_time, NULL);
	tenmilli = (current_time.tv_usec);
	return (tenmilli);
}

template <typename T>
void mergeallpart(T&v, int l, int r, int demi)
{
	int l1 = demi - l + 1;
	int l2 = r - demi;
	T lv(l1);
	T rv(l2);

	for (int i = 0; i < l1; i++)
	{
		lv[i] = v[l + i];
	}
	for(int i = 0; i < l2; i++)
	{
		rv[i] = v[demi + 1 + i];
	}
	int y = 0;
	int g = 0;
	int b = l;
	while (y < l1 && g < l2)
	{
		if (lv[y] <= rv[g])
		{
			v[b] = lv[y];
			y++;
		}
		else
		{
			v[b] = rv[g];
			g++;
		}
		b++;
	}

	while(y < l1)
	{
		v[b] = lv[y];
		b++;
		y++;
	}

	while(g < l2)
	{
		v[b] = rv[g];
		b++;
		g++;
	}
}

template <typename T>
void insertsort(T& v, int l , int r)
{
	for (int i = l + 1; i <= r; i++)
	{
		int val = v[i];
		int j = i - 1;
		while (j >= l && v[j] > val)
		{
			v[j + 1] = v[j];
			j--;
		}
		v[j + 1] = val;
	}
}

template <typename T>
void mergerinsertionsort(T& v, int l, int r)
{
	 if (l < r) 
	 {
		int demi = (l + r) / 2;
		if ((r - l) <= 10)
			insertsort(v, l, r);
		else
		{
			mergerinsertionsort(v, l, demi);
			mergerinsertionsort(v, demi + 1, r);
			mergeallpart(v, l, r, demi);
		}
	}
}


int pmergeme(int ar, char **arg)
{
	std::string tab;
	for(int i = 1; i < ar; i++)
	{
		std::string str = arg[i];
		for (int j = 0; j< str.length();j++)
		{
			if (isdigit(str.c_str()[j]) == 0)
			{
				std::cout << str.c_str()[j] << std::endl;
				std::cout << "Error" << std::endl;
				return (0);
			}
		}
	}
	std::vector<int> v;
	std::deque<int> d;
	for (int i = 1; i <= ar - 1 ; i++)
	{
		v.push_back(std::atoi(arg[i]));
		d.push_back(std::atoi(arg[i]));
	}
	std::cout << "Befor: ";
	for(int i = 0; i < v.size(); i++)
	{
		std::cout << " " << v[i] ;
	}
	std::cout << std::endl;
	double timebofvector = timeph();
	mergerinsertionsort(v, 0, v.size() - 1);
	double timeeofvector = timeph();
	double timebofdeque = timeph();
	mergerinsertionsort(d, 0, d.size() - 1);
	double timeeofdeque = timeph();
	std::cout << "after: ";
	for(int i = 0; i < v.size(); i++)
	{
		std::cout << " "<< v[i];
	}
	std::cout << std::endl;
	std::cout << "Time to process a range of "<< v.size() << " elements with std::vector<int> : " << timeeofvector - timebofvector << " us" << std::endl;
	std::cout << "Time to process a range of "<< d.size() <<" elements with std::deque<int> : " << timeeofdeque - timebofdeque << " us" << std::endl;
	return (0);
}