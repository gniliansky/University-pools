/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 19:44:31 by vgnylyan          #+#    #+#             */
/*   Updated: 2017/10/02 20:43:39 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check1(int *tab, int length, int (*f)(int, int))
{
	int index;

	index = 0;
	while (index < (length - 1))
	{
		if (f(tab[index], tab[index + 1]) >= 0)
		{
			if (index == (length - 2))
				return (1);
		}
		else
			break ;
		index++;
	}
	return (0);
}

int		check2(int *tab, int length, int (*f)(int, int))
{
	int index;

	index = 0;
	while (index < (length - 1))
	{
		if (f(tab[index], tab[index + 1]) <= 0)
		{
			if (index == (length - 2))
				return (1);
		}
		else
			break ;
		index++;
	}
	return (0);
}

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	if (length == 1)
		return (1);
	if (check1(tab, length, &*f) == 1)
		return (1);
	else
	{
		if (check2(tab, length, &*f) == 1)
			return (1);
		else
			return (0);
	}
	return (0);
}
