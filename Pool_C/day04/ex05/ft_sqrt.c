/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/23 20:53:49 by vgnylyan          #+#    #+#             */
/*   Updated: 2017/09/23 22:14:24 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int sqrt_nb;

	sqrt_nb = 0;
	if (nb > 0)
	{
		while (sqrt_nb * sqrt_nb < nb)
		{
			sqrt_nb = sqrt_nb + 1;
		}
		if (sqrt_nb * sqrt_nb > nb)
		{
			sqrt_nb = 0;
		}
	}
	else
	{
		sqrt_nb = 0;
	}
	return (sqrt_nb);
}
