/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 18:30:13 by vgnylyan          #+#    #+#             */
/*   Updated: 2017/10/02 18:46:20 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_count_if(char **tab, int (*f)(char*))
{
	int index;
	int count;

	index = 0;
	count = 0;
	while (tab[index] != 0)
	{
		if (f(tab[index]) == 1)
			count++;
		index++;
	}
	return (count);
}
