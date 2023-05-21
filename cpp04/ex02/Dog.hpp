/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 14:36:58 by ygbouri           #+#    #+#             */
/*   Updated: 2022/11/04 15:11:37 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"
#include "Brain.hpp"
class Dog: public Animal
{
	private:
		Brain *br;
	public:
		Dog();
		Dog(const Dog& ob);
		Dog& operator=(const Dog& ob);
		~Dog();
		void makeSound() const;
		Brain *getBrain( void );
		void  setBrain(Brain &br);
};
#endif
