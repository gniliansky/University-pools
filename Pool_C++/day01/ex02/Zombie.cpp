/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 09:33:00 by vgnylyan          #+#    #+#             */
/*   Updated: 2018/04/03 09:33:00 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) : _name("default_name"), _type("default_type")
{
	std::cout << "Zombie created" << std::endl;
	return;
}

Zombie::Zombie(std::string name, std::string type)
{
	std::cout << "Zombie created" << std::endl;
	this->_name = name;
	this->_type = type;
	return;
}


Zombie::~Zombie(void)
{
	std::cout << "Zombie deleted" << std::endl;
	return;
}

std::string		Zombie::announce() const
{
	std::string		message;

	message = "<" + this->_name + "(" + this->_type + ")> ";
	message += "Braiiiiiiinnnssss...";
	return (message);
}