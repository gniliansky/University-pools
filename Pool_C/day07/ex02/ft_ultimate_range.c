/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/28 09:33:44 by vgnylyan          #+#    #+#             */
/*   Updated: 2017/09/28 17:24:16 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int					ft_ultimate_range(int **range,
	int min, int max)
{
	unsigned int	len;
	int				index;
	int				*result;

	result = NULL;
	if (min > max || min == max)
	{
		*range = NULL;
		return (0);
	}
	else
	{
		index = 0;
		result = (int*)malloc(sizeof(int) * (max - min));
		while (min < max)
		{
			result[index] = min;
			min = min + 1;
			index = index + 1;
			len = len + 1;
		}
		len = len - 1;
		*range = result;
	}
	return (len);
}
