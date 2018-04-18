/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 11:35:00 by vgnylyan          #+#    #+#             */
/*   Updated: 2018/03/30 11:35:00 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

int main()
{
	std::string choice;
	PhoneBook p_book;

	std::cout << "ADD" << std::endl;
	std::cout << "SEARCH" << std::endl;
	std::cout << "EXIT" << std::endl;
	do
	{
		do
		{
			std::cout << "MAKE YOUR CHOICE AND PUSH ENTER : ";
			if (std::cin.peek() == EOF)
				exit(1);
			std::getline(std::cin, choice);
		} while (choice != "ADD" && choice != "SEARCH" && choice != "EXIT");
		if (choice == "ADD")
			p_book.add();
		if (choice == "SEARCH")
			p_book.search();
	}
	while (choice != "EXIT");

	return 0;
}