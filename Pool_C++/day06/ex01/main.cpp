/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 18:39:45 by vgnylyan          #+#    #+#             */
/*   Updated: 2018/04/11 18:39:48 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct Data
{
	std::string s1;
	int 		n;
	std::string s2;
};

void	* serialize(void)
{
	Data * data = new Data;
	std::string str = "1234567890qwertyuiopasdfghjklzxcvbnmMNBVCXZLKJHGFDSAPOIUYTREWQ";
	for(int i = 0; i < 8; i++) {
		data->s1 += str[rand() % str.length()];
	}
	data->n = rand() * (rand() % 2 ? 1 : -1);
	for(int i = 0; i < 8; i++) {
		data->s2 += str[rand() % str.length()];
	}
	return (data);
}

Data	* deserialize(void * raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int 	main(void)
{
	srand(time(NULL));
	void * v1 = serialize();
	std::cout << deserialize(v1)->s1  << deserialize(v1)->n << deserialize(v1)->s2 << std::endl;
	delete reinterpret_cast<Data*>(v1);
	std::cout << std::endl;

	Data * v2 = new Data;
	v2->s1 = "ASDFGHJK";
	v2->n = 1886702951;
	v2->s2 = "poiuytre";
	void * ptr = reinterpret_cast<void*>(v2);
	std::cout << deserialize(ptr)->s1  << deserialize(ptr)->n << deserialize(ptr)->s2 << std::endl;
	delete v2;

	return (0);
}