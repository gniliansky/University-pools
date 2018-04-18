/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 11:19:27 by vgnylyan          #+#    #+#             */
/*   Updated: 2017/10/05 12:32:12 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_display(int file)
{
	char buffer;

	while (read(file, &buffer, 1))
		write(1, &buffer, 1);
}

int		main(int argc, char **argv)
{
	int file;

	if (argc < 2)
	{
		write(1, "File name missing.\n", 20);
		return (0);
	}
	if (argc > 2)
	{
		write(1, "Too many arguments.\n", 21);
		return (0);
	}
	file = open(argv[1], O_RDONLY);
	if (file == -1)
	{
		close(file);
		return (0);
	}
	ft_display(file);
	close(file);
	return (0);
}
