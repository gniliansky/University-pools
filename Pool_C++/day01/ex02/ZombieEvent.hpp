/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 09:27:00 by vgnylyan          #+#    #+#             */
/*   Updated: 2018/04/03 09:27:00 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

#include "Zombie.hpp"

class ZombieEvent
{
public:
	ZombieEvent(void);
	~ZombieEvent(void);
	void		setZombieType(std::string type);
	std::string	getZombieType(void) const;
	Zombie		*newZombie(std::string name);
	void		randomChump(void);

private:
	std::string		_zombieType;
};


#endif
