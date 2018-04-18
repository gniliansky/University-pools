/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 13:13:00 by vgnylyan          #+#    #+#             */
/*   Updated: 2018/04/05 13:13:00 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class NinjaTrap : public ClapTrap
{
public:
	NinjaTrap();
	NinjaTrap(const std::string name);
	~NinjaTrap();
	NinjaTrap(const NinjaTrap & obj);
	NinjaTrap	& operator=(const NinjaTrap & obj);
	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);

	void 		ninjaShoebox(NinjaTrap &ninja);
	void 		ninjaShoebox(FragTrap &frag);
	void 		ninjaShoebox(ScavTrap &scav);
};

#endif
