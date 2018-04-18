/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/27 20:40:17 by vgnylyan          #+#    #+#             */
/*   Updated: 2017/09/28 12:00:59 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *bufer;
	int index;

	index = 0;
	if ((max - min) <= 0)
		return (NULL);
	else
	{
		bufer = (int*)malloc(4 * (max - min));
		while (min < max)
		{
			bufer[index] = min;
			index = index + 1;
			min = min + 1;
		}
		bufer[index] = '\0';
		return (bufer);
	}
	return (0);
}
