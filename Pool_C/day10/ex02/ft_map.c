/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 17:33:50 by vgnylyan          #+#    #+#             */
/*   Updated: 2017/10/02 17:53:02 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int *bufer;
	int index;

	index = 0;
	bufer = (int*)malloc(sizeof(int) * length);
	while (index < length)
	{
		bufer[index] = f(tab[index]);
		index++;
	}
	return (bufer);
}
