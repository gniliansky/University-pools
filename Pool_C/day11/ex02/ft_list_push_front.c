/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/04 18:13:34 by vgnylyan          #+#    #+#             */
/*   Updated: 2017/10/04 18:43:04 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *first;

	if (begin_list == NULL)
		first = ft_create_elem(data);
	else
	{
		first = ft_create_elem(data);
		first->next = *begin_list;
		*begin_list = first;
	}
	return ;
}
