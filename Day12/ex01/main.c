/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaucoul <vvaucoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 21:55:53 by vvaucoul          #+#    #+#             */
/*   Updated: 2018/08/23 18:39:59 by vvaucoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

void	erreur_errno(void)
{
	if (errno == 21)
		write(2, ": Is a directory\n", 17);
	else
		write(2, ": No such file or directory\n", 28);
}

void	display(int argc, char **argv)
{
	int		fd;
	char	buffer;
	int		i;
	char	*file;

	i = 0;
	while (++i <= argc)
	{
		file = argv[i];
		fd = open(file, O_RDWR);
		if (fd < 0)
		{
			write(2, "cat: ", 5);
			write(2, file, ft_strlen(file));
			erreur_errno();
		}
		else
		{
			while (read(fd, &buffer, 1))
				write(1, &buffer, 1);
		}
		close(fd);
	}
}

void	write_stdout(void)
{
	char buffer;

	while (read(STDIN_FILENO, &buffer, 1) > 0)
		write(1, &buffer, 1);
}

int		main(int argc, char **argv)
{
	if (argc == 1)
		write_stdout();
	else
		display(argc - 1, argv);
	return (0);
}
