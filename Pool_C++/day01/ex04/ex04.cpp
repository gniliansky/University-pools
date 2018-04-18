/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 12:39:05 by vgnylyan          #+#    #+#             */
/*   Updated: 2018/04/03 12:39:09 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(void)
{
	std::string str("HI THIS IS BRAIN");
	std::string *strPtr;
	std::string	&strRef = str;

	strPtr = &str;
	std::cout << *strPtr << std::endl;
	std::cout << strRef << std::endl;
	return (0);
}
