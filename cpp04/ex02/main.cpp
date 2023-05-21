/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 14:37:01 by ygbouri           #+#    #+#             */
/*   Updated: 2022/11/13 16:45:15 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->Animal::getType() << " " << std::endl;
	std::cout << i->Animal::getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	WrongAnimal *wc = new WrongCat();
	std::cout << wc->WrongAnimal::getType() << " " << std::endl;
	wc->makeSound();
	Animal *an[10];
	for(int i = 0; i < 5 ; i++)
	{
		an[i] = new Dog();
	}
	for(int i = 5; i < 10 ; i++)
	{
		an[i] = new Cat();
	}
	delete wc;
	delete j;
	delete i;
	for (int i = 0; i < 10; i++)
	{
		delete an[i];
	}
	return 0;
}
