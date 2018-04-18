/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/23 18:48:11 by vgnylyan          #+#    #+#             */
/*   Updated: 2017/09/23 20:19:56 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	int number;

	if (index <= 0)
	{
		number = -1;
	}
	if (index == 0)
	{
		number = 0;
	}
	if (index == 1)
	{
		number = 1;
	}
	if (index > 1)
	{
		number = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	}
	return (number);
}
