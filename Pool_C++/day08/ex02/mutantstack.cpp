/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 11:02:00 by vgnylyan          #+#    #+#             */
/*   Updated: 2018/04/13 11:02:00 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

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