/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 11:41:00 by vgnylyan          #+#    #+#             */
/*   Updated: 2018/04/03 11:41:00 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP

#include "Zombie.hpp"

class ZombieHorde
{
public:
	ZombieHorde(void);
	ZombieHorde(int N);
	~ZombieHorde();
	void	announce(void) const;


private:
	Zombie	*_zombies;
	int		_nbZombies;
	std::string		_randName(void) const;
	std::string		_randType(void) const;
};


#endif
