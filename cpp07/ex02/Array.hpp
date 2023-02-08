/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 06:06:57 by ygbouri           #+#    #+#             */
/*   Updated: 2022/11/22 22:35:58 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template<typename T> class Array
{
    private:
        T *arr;
        unsigned int n;
    public:
        Array()
        {
            arr = new T();  
        }
        Array(unsigned int n)
        {
            this->n = n;
            arr = new T[this->n];
            
        }
        Array(const Array& ob)
        {
            this->n = ob.n;
            arr = new T[this->n];
            for(int i = 0; i < this->n; i++)
            {
                this->arr[i] = ob.arr[i];
            }
        }
        Array& operator=(const Array& ob)
        {
            this->n = ob.n;
            for(int i = 0; i < this->n; i++)
            {
                this->arr[i] = ob.arr[i];
            }
            return (*this);
        }

        T& operator[](unsigned int n)
        {
            if (this->n < n)
                throw (erroEx());
            return (arr[n]);
        }
        class erroEx:public std::exception
        {
            public:
                const char * what() 
                {
                    return ("n not in range");
                }
        };
        unsigned int size()
        {
            return (this->n);
        }
        ~Array()
        {
            if (this->n)
                delete[] arr;
        }
};

