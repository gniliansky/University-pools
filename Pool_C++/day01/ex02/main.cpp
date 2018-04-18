/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/02 18:57:20 by vgnylyan          #+#    #+#             */
/*   Updated: 2018/04/02 18:57:23 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int
main(void)
{
	Zombie      zombieStack("Josef", "killer");
	Zombie		*zombieHeap;
	ZombieEvent event;

	srand(time(NULL));
	std::cout << zombieStack.announce() << std::endl;
	event.setZombieType("strong");
	zombieHeap = event.newZombie("Apocalipsis");
	std::cout << zombieHeap->announce() << std::endl;
	delete zombieHeap;
	event.randomChump();
	return (0);
}

