/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 17:59:00 by vgnylyan          #+#    #+#             */
/*   Updated: 2018/04/11 17:59:00 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Base.class.hpp"
#include "A.class.hpp"
#include "B.class.hpp"
#include "C.class.hpp"

Base	* geverate(void)
{
	int i = rand() % 3;
	switch (i) {
		case 0:
			return (new A);
		case 1:
			return (new B);
		case 2:
			return (new C);
	}
	return (new A);
}

void	identity_form_pointer(Base & p)
{
	try {
		A & a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		static_cast<void>(a);
	}
	catch (...){
		try {
			B & b = dynamic_cast<B&>(p);
			std::cout << "B" << std::endl;
			static_cast<void>(b);
		}
		catch (...) {
			std::cout << "C" << std::endl;
			}
	}
}

void	identity_form_pointer(Base * p)
{
	if (dynamic_cast<A*>(p)) {
		std::cout << "A" << std::endl;
	}
	if (dynamic_cast<B*>(p)) {
		std::cout << "B" << std::endl;
	}
	if (dynamic_cast<C*>(p)) {
		std::cout << "C" << std::endl;
	}

}

int 	main(void)
{
	srand(time(NULL));

	Base *a0 = geverate();
	Base *b0 = geverate();
	Base *c0 = geverate();
	identity_form_pointer(a0);
	identity_form_pointer(b0);
	identity_form_pointer(c0);
	std::cout << std::endl;

	A a1;
	B b1;
	C c1;
	identity_form_pointer(a1);
	identity_form_pointer(b1);
	identity_form_pointer(c1);
	std::cout << std::endl;

	A *a2 = new A;
	B *b2 = new B;
	C *c2 = new C;
	identity_form_pointer(a2);
	identity_form_pointer(b2);
	identity_form_pointer(c2);

	delete a0;
	delete b0;
	delete c0;

	delete a2;
	delete b2;
	delete c2;

	return (0);
}