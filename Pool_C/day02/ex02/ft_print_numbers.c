/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 15:36:28 by vgnylyan          #+#    #+#             */
/*   Updated: 2017/09/21 20:59:31 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	char first_number;

	first_number = 48;
	while (first_number <= 57)
	{
		ft_putchar(first_number);
		first_number = first_number + 1;
	}
}
