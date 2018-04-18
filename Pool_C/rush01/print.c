/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/07 17:08:01 by vgnylyan          #+#    #+#             */
/*   Updated: 2017/10/07 18:34:14 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	ft_print_stop(void)
{
	write(1, "aucune", 6);
}

void	ft_print(int rush, int x, int y)
{
	write(1, "[rush-0", 7);
	ft_putnbr(rush);
	write(1, "] [", 3);
	ft_putnbr(x);
	write(1, "] [", 3);
	ft_putnbr(y);
	write(1, "]", 1);
}

void	ft_print_end(void)
{
	write(1, " || ", 4);
}
