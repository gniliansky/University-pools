/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/04 20:55:15 by vgnylyan          #+#    #+#             */
/*   Updated: 2017/10/04 21:36:31 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_push_params(int ac, char **av)
{
	int		index;
	t_list	*bufer;
	t_list	*list;

	index = 2;
	if (ac == 1)
		return (NULL);
	list = ft_create_elem(av[1]);
	list->next = 0;
	while (index < ac)
	{
		bufer = list;
		list = ft_create_elem(av[index]);
		list->next = bufer;
		index++;
	}
	return (list);
}
