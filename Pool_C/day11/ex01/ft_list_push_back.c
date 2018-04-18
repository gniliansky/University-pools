/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_pusk_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/04 17:17:03 by vgnylyan          #+#    #+#             */
/*   Updated: 2017/10/04 18:12:27 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *new_end;
	t_list *end;

	if (begin_list == NULL)
		new_end = ft_create_elem(data);
	else
	{
		end = *begin_list;
		while (end->next != NULL)
		{
			end = end->next;
		}
		new_end = ft_create_elem(data);
		end->next = new_end;
	}
	return ;
}
