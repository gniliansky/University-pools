/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 14:35:00 by vgnylyan          #+#    #+#             */
/*   Updated: 2018/04/03 14:35:00 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
//	this->_name = name;
//	this->_weapon = weapon;
}

void		HumanB::attack(void)
{
	std::cout << this->_name << " attacks with his " << this->_weapon->getType();
	std::cout << std::endl;
	return;
}

void		HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
	return;
}