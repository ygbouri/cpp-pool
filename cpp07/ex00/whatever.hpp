/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 03:53:21 by ygbouri           #+#    #+#             */
/*   Updated: 2022/11/22 04:40:21 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T> 
void swap(T &a, T &b)
{
    T temp;
    
    temp = b;
    b = a;
    a = temp;
}

template <typename T> T min(T a, T b)
{
    if (a < b)
        return (a);
    return (b);
}

template <typename T> T max(T a, T b)
{
    if (a > b)
        return (a);
    return (b);
}
