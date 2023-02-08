/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 19:32:55 by ygbouri           #+#    #+#             */
/*   Updated: 2022/11/25 05:28:33 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
template <typename T >

void easyfind(T t, int j)
{
    if ((std::find(t.begin(), t.end(), j) == t.end()))
    {
        throw (std::exception()); 
    }
    std::cout <<j << " in range" << std::endl;
}
