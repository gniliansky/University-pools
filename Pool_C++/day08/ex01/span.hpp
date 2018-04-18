/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 18:07:00 by vgnylyan          #+#    #+#             */
/*   Updated: 2018/04/12 18:07:00 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

class Span
{
public:
	Span(void);
	Span(unsigned int N);
	Span(const Span & sp);
	~Span(void);

	Span & 	operator= (const Span & sp);

	void			addNumber(unsigned int value);
	unsigned int	shortestSpan(void);
	unsigned int	longestSpan(void);


private:
	std::vector<int>	_box;
	unsigned int		_size;
	unsigned int		_maxSize;

};


#endif
