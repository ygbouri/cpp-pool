/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:51:08 by ygbouri           #+#    #+#             */
/*   Updated: 2022/11/09 15:53:22 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
#define AMATERIA_H

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;
class AMateria
{
	protected:
		std::string const type;
	public:
		AMateria(std::string const &type);
		std::string const &getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use (ICharacter& target);
		AMateria();
		AMateria(const AMateria& ob);
		AMateria& operator=(const AMateria& ob);
		virtual ~AMateria();
};
#endif
