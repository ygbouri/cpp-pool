/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 23:08:20 by ygbouri           #+#    #+#             */
/*   Updated: 2022/11/25 07:25:30 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
    N = 0;
    std::cout << "Default destructor called" << std::endl;
}

Span::Span(unsigned int n)
{
    this->N = n;
}

Span& Span::operator=(const Span& ob)
{
    if (this != &ob)
    {
        this->N = ob.N;
        this->v = ob.v;
    }
    return(*this);
}

Span::Span(const Span& ob)
{
    this->N = ob.N;
    this->v = ob.v;
}

void Span::addNumber(int num)
{
    if (this->v.size() < this->N)
        this->v.push_back(num);
}

int Span::getNum() const
{
    return (this->N);
}

void Span::setNum(unsigned int n)
{
    this->N = n;
}


void sort(int *tab, unsigned int size)
{
    for(int i = 0; i < size; i++)
    {
        for(int j = i + 1; j < size; j++)
        {
            if (tab[j] < tab[i])
            {
                int temp = tab[i];
                tab[i] = tab[j];
                tab[j] = temp;
            }
        }
    }
}

int Span::shortestSpan()
{
    unsigned int min;
    if (this->v.size() > 1)
    {
        int size = this->v.size();
        int tab[size];
        unsigned int j = 0;
        std::vector<int>::iterator i;
        for(i = this->v.begin(); i != this->v.end(); i++)
        {
            tab[j] = *i;
            j++;
        }
        sort(tab, size);
        min = tab[1] - tab[0];
        for(int i = 0; i < size; i++)
        {
            for(int j = i + 1; j < size; j++)
            {
                if (min > (tab[j] - tab[i]))
                    min = tab[j] - tab[i];
            }
        }
        return (min);
    }
    else
    {
        std::exception e;
        throw(e);
        return (0);
    }
}

int Span::longestSpan()
{
    unsigned int max;

    if (this->v.size() > 1)
    {
        int size = this->v.size();
        int tab[size];
        unsigned int j = 0;
        std::vector<int>::iterator i;
        for(i = this->v.begin(); i != this->v.end(); i++)
        {
            tab[j] = *i;
            j++;
        }
        sort(tab, size);
        max = tab[1] - tab[0];
        for(int i = 0; i < size; i++)
        {
            for(int j = i + 1; j < size; j++)
            {
                if (max < (tab[j] - tab[i]))
                    max = tab[j] - tab[i];
            }
        }
        return (max);
    }
    else
    {
        std::exception e;
        throw(e);
        return(0);
    }
}

void Span::addRange(std::vector<int>::iterator i, std::vector<int>::iterator j, size_t size)
{
    if ((this->v.size() + size) <= this->N)
    {
        this->v.insert(this->v.end(), i, j);
   }
}

void Span::affichData()
{
    std::vector<int>::iterator i;
    for(i = this->v.begin(); i != this->v.end(); i++)
    {
        std::cout << *i << std::endl;
    }
}

Span::~Span()
{
    std::cout << "Default destructor called" << std::endl;
}