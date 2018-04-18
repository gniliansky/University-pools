/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 18:03:39 by vgnylyan          #+#    #+#             */
/*   Updated: 2018/04/12 18:03:40 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
	Span sp = Span(12003);
	try {
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch (std::logic_error & error) {
		std::cout << error.what() << std::endl;
	}

	sp.addNumber(-2147483648);

	try {
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::logic_error & error) {
		std::cout << error.what() << std::endl;
	}

	for (int i = 0; i < 12000; i++) {
		sp.addNumber(i);
	}
	sp.addNumber(13000);
	sp.addNumber(2147483647);

	try {
		sp.addNumber(-4);
	}
	catch (std::logic_error & error) {
		std::cout << error.what() << std::endl;
	}

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}