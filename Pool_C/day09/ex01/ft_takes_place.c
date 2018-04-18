/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/28 18:35:33 by vgnylyan          #+#    #+#             */
/*   Updated: 2017/09/28 19:25:29 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void		ft_takes_place(int hour)
{
	if (hour == 12)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN 12.00 A.M. AND 1.00 P.M.\n");
		return ;
	}
	if (hour == 24)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN 12.00 P.M. AND 1.00 A.M.\n");
		return ;
	}
	if (hour > 0 && hour < 12)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN %i.00 A.M.", hour);
		printf("AND %i.00 A.M.\n", (hour + 1));
		return ;
	}
	if (hour > 12 && hour < 24)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN %i.00 P.M.", (hour - 12));
		printf("AND %i.00 P.M.\n", (hour - 11));
		return ;
	}
	return ;
}
