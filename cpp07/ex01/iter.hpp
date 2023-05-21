/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 04:47:42 by ygbouri           #+#    #+#             */
/*   Updated: 2022/11/23 18:02:12 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once


template <typename A> 
void iter( A *a, unsigned int l, void f(A const& x ))
{
    for (int i = 0; i < l; i++)
    {
        f(a[i]);
    }
}
