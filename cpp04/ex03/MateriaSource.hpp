/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 22:35:03 by ygbouri           #+#    #+#             */
/*   Updated: 2022/11/09 11:46:13 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include  "Character.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		static AMateria* tabMateria[4];
		MateriaSource();
		MateriaSource(const MateriaSource& ob);
		MateriaSource& operator=(const MateriaSource& ob);
		~MateriaSource();
		void learnMateria(AMateria* ob);
		AMateria* createMateria(std::string const & type);
};
