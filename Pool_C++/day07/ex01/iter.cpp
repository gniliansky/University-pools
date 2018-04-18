/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 14:23:02 by vgnylyan          #+#    #+#             */
/*   Updated: 2018/04/11 14:23:08 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<typename T>
void 	iter(const T * arr, int size, void (*f)(const T &))
{
	if (arr && size >= 0 && f) {
		for (int i = 0; i < size; i++) {
			f(arr[i]);
		}
	}
	else {
		std::cout << "Error!!!" << std::endl;
	}
	return ;
}

template<typename T>
void 	print(const T & x)
{
	std::cout << x << std::endl;
}

int 	main(void)
{
	int arr1[] = { 2, 5, 53, 32};
	std::string arr2[] = { "Hello World", "It is true", "43", "Number 32"};
	iter(arr1, 4, &print);
	std::cout << std::endl;
	iter(arr2, 4, &print);
	return (0);
}