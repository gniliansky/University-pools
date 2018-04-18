/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 11:41:00 by vgnylyan          #+#    #+#             */
/*   Updated: 2018/04/03 11:41:00 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(void) : _zombies(NULL), _nbZombies(0)
{
	std::cout << "ZombieHorde created" << std::endl;
	return ;
}

ZombieHorde::ZombieHorde(int N)
{
	std::cout << "ZombieHorde created" << std::endl;
	this->_nbZombies = N;
	this->_zombies = new Zombie[N];
	for (int i = 0; i < N; i++) {
		_zombies[i].setName(_randName());
		_zombies[i].setType(_randType());
	}
}

ZombieHorde::~ZombieHorde(void)
{
	delete [] this->_zombies;
	std::cout << "ZombieHorde destroyed" << std::endl;
}

std::string		ZombieHorde::_randName(void) const
{
	std::string		names[] = {"Viktor", "Ivan", "Maksum", "Chirs", "Bob"};
	int				index;

	index = rand() % 5;
	return (names[index]);
}

std::string		ZombieHorde::_randType(void) const
{
	std::string		names[] = {"strong", "fatty", "little", "lazy", "crazy"};
	int				index;

	index = rand() % 5;
	return (names[index]);
}

void			ZombieHorde::announce(void) const
{
	for (int i = 0; i < this->_nbZombies; i++) {
		std::cout << _zombies[i].announce() << std::endl;
	}
	return;
}