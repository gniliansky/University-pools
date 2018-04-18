/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 09:33:00 by vgnylyan          #+#    #+#             */
/*   Updated: 2018/04/03 09:33:00 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
public:
	Zombie(std::string name, std::string type);
	Zombie(void);
	~Zombie(void);
	std::string	announce(void) const;
	void		setName(std::string name);
	void		setType(std::string type);

private:
	std::string		_name;
	std::string		_type;
};

#endif
