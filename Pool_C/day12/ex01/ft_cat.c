/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgnylyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 18:15:01 by vgnylyan          #+#    #+#             */
/*   Updated: 2017/10/05 18:33:15 by vgnylyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_display(int ac, char **av)
{
	int		index;
	int		file;
	char	buffer;

	index = 1;
	while (index < ac)
	{
		file = open(av[index], O_RDONLY);
		if (file >= 0)
		{
			while (read(file, &buffer, 1) != 0)
				write(1, &buffer, 1);
		}
		else
		{
			ft_putstr("cat: ");
			ft_putstr(av[index]);
			ft_putstr(": No such file or directory\n");
		}
		close(file);
		index++;
	}
}

void	ft_display_str(void)
{
	int buffer;

	while (read(1, &buffer, 1) != 0)
		write(1, &buffer, 1);
}

int		main(int argc, char **argv)
{
	if (argc == 1 || argv[1][0] == '-')
		ft_display_str();
	else
		ft_display(argc, argv);
	return (0);
}
