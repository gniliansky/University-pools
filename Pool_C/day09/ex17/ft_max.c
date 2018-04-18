/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/29 10:40:53 by vgnylyan          #+#    #+#             */
/*   Updated: 2017/09/29 11:12:36 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_max(int *tab, int length)
{
	int index;
	int result;

	index = 0;
	result = 0;
	if (length == 0)
	{
		return (0);
	}
	if (length == 1)
	{
		return (tab[0]);
	}
	if (length > 1)
	{
		result = tab[index];
		while (index < (length - 1))
		{
			if (result < tab[index + 1])
				result = tab[index + 1];
			index = index + 1;
		}
		return (result);
	}
	return (0);
}
