/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 11:55:00 by vgnylyan          #+#    #+#             */
/*   Updated: 2018/04/04 11:55:00 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

void	Human::meleeAttack(std::string const & target)
{
	std::cout << "Run function melleAttack: " << target << std::endl;
}

void	Human::rangedAttack(std::string const & target)
{
	std::cout << "Run function rangedAttack: " << target << std::endl;
}

void	Human::intimidatingShout(std::string const &target)
{
	std::cout << "Run function intimidatingShout: " << target << std::endl;
}

void	Human::action(std::string const & action_name, std::string const & target)
{
	const std::string	arr[] = {"meleeAttack", "rengedAttack", "intimidatingShout"};
	void	(Human::*f[])(const std::string &) =
			{ &Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout};
	for (int i = 0; i < 3; i++) {
		if (arr[i] == action_name) {
			(this->*f[i])(target);
		}
	}
}