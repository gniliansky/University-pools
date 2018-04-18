/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 12:49:18 by vgnylyan          #+#    #+#             */
/*   Updated: 2017/09/21 20:50:30 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_reverse_alphabet(void)
{
	char first_char;
	char end_char;

	first_char = 'a';
	end_char = 'z';
	while (end_char >= first_char)
	{
		ft_putchar(end_char);
		end_char = end_char - 1;
	}
}
