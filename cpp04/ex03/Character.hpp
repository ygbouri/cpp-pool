/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygbouri <ygbouri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:51:13 by ygbouri           #+#    #+#             */
/*   Updated: 2022/11/09 16:08:07 by ygbouri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
#define CHARACTER_H

#include "ICharacter.hpp"

class Character:public ICharacter
{
	private:
		std::string const& name;
		static AMateria* tabequip[4];
		static AMateria* tabunequip[10];
	public:
		Character();
		Character(const Character& ob);
		Character (std::string const &name);
		Character& operator=(const Character& ob);
		~Character();
		std::string const &getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif
