/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 23:08:23 by ygbouri           #+#    #+#             */
/*   Updated: 2022/11/25 07:24:20 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <vector>
#include <iterator>

class Span
{
    private:
        unsigned int N;
    public:
        std::vector<int> v;
        Span();
        Span(unsigned int n);
        Span& operator=(const Span& ob);
        Span(const Span& ob);
        ~Span();
        void addNumber(int num);
        int getNum() const;
        void setNum(unsigned int n);
        int shortestSpan();
        int longestSpan();
        void addRange(std::vector<int>::iterator i, std::vector<int>::iterator j, size_t size);
        void affichData();
};

void sort(int *tab, unsigned int size);