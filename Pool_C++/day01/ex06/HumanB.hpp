/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 14:35:00 by vgnylyan          #+#    #+#             */
/*   Updated: 2018/04/03 14:35:00 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanB
{
	public:
		HumanB(std::string	name);
		void 	attack(void);
		void setWeapon(Weapon &weapon);

	private:
		Weapon			*_weapon;
		std::string		_name;
};


#endif
