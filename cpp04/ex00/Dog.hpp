/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 14:36:58 by ygbouri           #+#    #+#             */
/*   Updated: 2022/11/16 13:59:22 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"
class Dog: public Animal
{
	public:
		Dog();
		Dog(const Dog& ob);
		Dog& operator=(const Dog& ob);
		~Dog();
		void makeSound() const;
};
#endif
