/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/23 12:10:21 by vgnylyan          #+#    #+#             */
/*   Updated: 2017/09/23 16:28:40 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int result;

	if (nb == 0 || nb == 1)
	{
		result = 1;
	}
	if (nb > 1 && nb <= 12)
	{
		result = nb;
		while (nb > 1)
		{
			result = result * (nb - 1);
			nb = nb - 1;
		}
	}
	else
	{
		result = 0;
	}
	return (result);
}
