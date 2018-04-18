/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 13:27:00 by vgnylyan          #+#    #+#             */
/*   Updated: 2018/04/12 13:27:00 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
# define EASYFIND_H

#include <algorithm>

template<typename T>
typename T::iterator		easyfind(T box, int find)
{
	typename T::iterator it = std::find(box.begin(), box.end(), find);
	if (it == box.end()) {
		throw (std::logic_error("Сan’t be found"));
	}
	return (it);
}


#endif