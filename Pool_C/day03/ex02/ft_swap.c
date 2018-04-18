/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/22 11:20:41 by vgnylyan          #+#    #+#             */
/*   Updated: 2017/09/22 22:12:24 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int a_1;
	int b_1;

	a_1 = *a;
	b_1 = *b;
	*a = b_1;
	*b = a_1;
	return ;
}
