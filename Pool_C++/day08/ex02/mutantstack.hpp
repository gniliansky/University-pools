/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 11:02:00 by vgnylyan          #+#    #+#             */
/*   Updated: 2018/04/13 11:02:00 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {

public:
	MutantStack();
	MutantStack(const MutantStack<T> & mutantStack);
	~MutantStack();

	using    std::stack<T>::operator=;

	typedef typename std::stack<T>::container_type::iterator    iterator;

	iterator    begin(void);
	iterator    end(void);
};

template <typename T>
MutantStack<T>::MutantStack(void)
{
	return ;
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T> & mutantStack)
{
	*this = mutantStack;
	return;
}

template <typename T>
MutantStack<T>::~MutantStack(void)
{
	return ;
}

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin(void)
{
	return (std::stack<T>::c.begin());
}

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::end(void)
{
	return (std::stack<T>::c.end());
}

#endif
