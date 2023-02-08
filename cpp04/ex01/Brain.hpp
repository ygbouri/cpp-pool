/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 21:47:18 by ygbouri           #+#    #+#             */
/*   Updated: 2022/11/17 00:04:06 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
#define BRAIN_H

#include <iostream>

class Brain
{
	public:
		std::string ideas[100];
		Brain();
		Brain(const Brain& ob);
		Brain& operator=(const Brain& ob);
		~Brain();
		void setBrainS(std::string name);
};
#endif
