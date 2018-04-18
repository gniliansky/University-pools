/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/23 12:10:21 by vgnylyan          #+#    #+#             */
/*   Updated: 2017/09/23 15:58:51 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_recursive_factorial(int nb)
{
	int result;

	result = 0;
	if (nb == 1 || nb == 0)
	{
		result = 1;
	}
	if (nb < 0 || nb > 12)
	{
		result = 0;
	}
	if (nb > 1 && nb <= 12)
	{
		result = nb * ft_recursive_factorial(nb - 1);
	}
	return (result);
}
