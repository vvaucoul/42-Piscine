/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaucoul <vvaucoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 19:43:23 by vvaucoul          #+#    #+#             */
/*   Updated: 2018/08/23 11:45:24 by vvaucoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <stdlib.h>
#include "my.h"

void	display_header(int i, int argc, char *file)
{
	if ((i < argc && i > 3) || (argc > 4 && i == 3))
	{
		if (i > 3)
			write(1, "\n", 1);
		write(1, "==> ", 4);
		write(1, file, ft_strlen(file));
		write(1, " <==\n", 5);
	}
}

char	*place_file(char *file, char *str)
{
	int		fd;
	int		i;
	char	buffer;

	i = 0;
	fd = open(file, O_RDONLY);
	while (read(fd, &buffer, 1))
	{
		str[i] = buffer;
		++i;
	}
	str[i] = '\0';
	return (str);
}

void	read_file(char *str, int count_char, int char_max)
{
	int i;

	i = 0;
	while (str[i])
	{
		if ((char_max > 0 && i >= count_char - char_max) ||
			(char_max < 0 && i >= char_max * -1))
			write(1, &str[i], 1);
		++i;
	}
}

void	display(int argc, char **argv, int char_max)
{
	int		i;
	int		fd;
	int		count_char;
	char	buffer;
	char	*str;

	i = 3;
	while (i < argc)
	{
		display_header(i, argc, argv[i]);
		fd = open(argv[i], O_RDONLY);
		if (fd == -1)
			write(2, "Error file\n", 11);
		else
		{
			count_char = 0;
			while (read(fd, &buffer, 1))
				++count_char;
			close(fd);
			str = malloc(sizeof(char) * count_char);
			str = place_file(argv[i], str);
			read_file(str, count_char, char_max);
		}
		++i;
	}
}

int		main(int argc, char **argv)
{
	int		char_max;

	if (argc <= 2)
	{
		write(2, "Option is missing.\n", 19);
		return (0);
	}
	if (argc <= 3)
	{
		write(2, "File is missing.\n", 17);
		return (0);
	}
	char_max = ft_atoi(argv[2]);
	if (char_max < 0)
		char_max *= -1;
	else if (argv[2][0] == '+')
		char_max *= -1;
	display(argc, argv, char_max);
	return (0);
}
