/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 18:07:00 by vgnylyan          #+#    #+#             */
/*   Updated: 2018/04/12 18:07:00 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(void)
{
	this->_size = 0;
	this->_maxSize = 0;
	return ;
}

Span::Span(unsigned int N)
{
	this->_size = 0;
	this->_maxSize = N;
	return ;
}

Span::Span(const Span & sp)
{
	*this = sp;
	return;
}

Span::~Span(void)
{
	return;
}

Span	& Span::operator=(const Span & sp)
{

	this->_size = sp._size;
	this->_maxSize = sp._maxSize;
	this->_box = sp._box;
	return *this;
}

void 	Span::addNumber(unsigned int value)
{
	if (this->_box.size() == this->_maxSize) {
		throw (std::logic_error("Span is full"));
	}
	this->_size++;
	this->_box.push_back(value);
}

unsigned int	Span::shortestSpan(void)
{
	unsigned int	shortSize = 4294967295;

	if (this->_size < 2) {
		throw (std::logic_error("Not enough elements to search"));
	}
	std::sort(this->_box.begin(), this->_box.end());
	for (unsigned int i = 1; i < this->_size; i++) {
		if (static_cast<unsigned int>(this->_box[i ] - this->_box[i- 1]) < shortSize) {
			shortSize = this->_box[i ] - this->_box[i- 1];
		}
	}
	return (shortSize);
}

unsigned int	Span::longestSpan(void)
{
	if (this->_size < 2) {
		throw (std::logic_error("Not enough elements to search"));
	}
	std::sort(this->_box.begin(), this->_box.end());
	return (*(this->_box.rbegin()) - *(this->_box.begin()));
}

