/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 14:36:53 by ygbouri           #+#    #+#             */
/*   Updated: 2022/11/16 21:24:49 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"
#include "Brain.hpp"
class Cat: public Animal
{
	private:
		Brain *br;
	public:
		Cat();
		Cat(const Cat& ob);
		Cat& operator=(const Cat& ob);
		virtual ~Cat();
		void makeSound() const;
		Brain *getBrain( void ) const;
		void  setBrain(Brain &br);
};
#endif
