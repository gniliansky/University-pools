/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/04 19:50:45 by vgnylyan          #+#    #+#             */
/*   Updated: 2017/10/04 20:29:44 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int				ft_list_size(t_list *begin_list)
{
	t_list		*count;
	int			counter;

	counter = 0;
	if (begin_list == NULL)
		return (counter);
	else
	{
		counter = 1;
		count = begin_list;
		while (count->next != NULL)
		{
			count = count->next;
			counter++;
		}
	}
	return (counter);
}
