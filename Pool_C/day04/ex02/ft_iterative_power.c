/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power_test.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/23 16:57:02 by vgnylyan          #+#    #+#             */
/*   Updated: 2017/09/23 19:25:47 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_iterative_power(int nb, int power)
{
	int nb_0;

	if (power < 0)
	{
		nb = 0;
	}
	if (power == 0 && nb != 0)
	{
		nb = 1;
	}
	if (power == 0 && nb == 0)
	{
		nb = 0;
	}
	if (power > 0)
	{
		nb_0 = nb;
		while (power > 1)
		{
			nb = nb * nb_0;
			power = power - 1;
		}
	}
	return (nb);
}
