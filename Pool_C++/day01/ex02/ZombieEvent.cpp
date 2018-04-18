/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 09:27:00 by vgnylyan          #+#    #+#             */
/*   Updated: 2018/04/03 09:27:00 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent() : _zombieType("default_type")
{
	return;
}

ZombieEvent::~ZombieEvent()
{
	return;
}

void		ZombieEvent::setZombieType(std::string type)
{
	this->_zombieType = type;
}

Zombie		*ZombieEvent::newZombie(std::string name)
{
	Zombie *zombieNew = new Zombie(name, this->_zombieType);
	return (zombieNew);
}

void		ZombieEvent::randomChump(void)
{
	std::string		names[] = {"Viktor", "Ivan", "Maksum", "Chirs", "Bob"};
	int				index;
	Zombie 			*newZombie;

	index = rand() % 5;
	newZombie = (this->newZombie)(names[index]);
	std::cout << newZombie->announce() << std::endl;
	delete newZombie;
	return ;
}
