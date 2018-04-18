/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 11:54:39 by vgnylyan          #+#    #+#             */
/*   Updated: 2018/04/04 11:54:41 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int		main(void)
{
	Human	human;
	human.action("meleeAttack", "test 1");
	human.action("rengedAttack", "test 2");
	human.action("intimidatingShout", "test 3");
	return (0);
}
