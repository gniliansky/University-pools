/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power_test.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/23 16:57:02 by vgnylyan          #+#    #+#             */
/*   Updated: 2017/09/23 18:30:01 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_recursive_power(int nb, int power)
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
		nb = nb * ft_recursive_power(nb, power - 1);
	}
	return (nb);
}
