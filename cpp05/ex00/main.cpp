/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 20:04:19 by ygbouri           #+#    #+#             */
/*   Updated: 2022/11/18 11:13:10 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat bu = Bureaucrat("youssef", 150);
	std::cout << bu << std::endl;
	bu.increment();
	bu.increment();
	bu.increment();
	bu.increment();
	bu.increment();
	std::cout << "increment " << bu << std::endl;
	bu.decrement();
	bu.decrement();
	bu.decrement();
	bu.decrement();
	bu.decrement();
	bu.decrement();
	bu.decrement();
	bu.decrement();
	bu.decrement();
	bu.decrement();
	bu.decrement();
	bu.decrement();
	bu.decrement();
	bu.decrement();
	bu.decrement();

	std::cout << bu << std::endl;
	std::cout <<  bu.getName() << ", bureaucrat grade " << bu.getGrade() << std::endl;

}
