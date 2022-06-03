/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaucoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 12:22:38 by vvaucoul          #+#    #+#             */
/*   Updated: 2018/08/10 14:53:35 by vvaucoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] <= 32)
		++i;
	--i;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		++i;
	}
	return (0);
}

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		++i;
	}
	return (str);
}

void	prog_init(char **argv, int argc, int y)
{
	while (y < argc)
	{
		argv[y] = ft_strlowcase(argv[y]);
		++y;
	}
}

int		prog(int argc, char **argv)
{
	char	*attack;
	char	*president;
	char	*bauer;
	int		y;

	attack = "attack";
	president = "president";
	bauer = "bauer";
	y = 0;
	prog_init(argv, argc, y);
	while (y < argc)
	{
		if (ft_strcmp(argv[y], attack) == 0)
			return (0);
		if (ft_strcmp(argv[y], president) == 0)
			return (0);
		if (ft_strcmp(argv[y], bauer) == 0)
			return (0);
		++y;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	if (argc <= 1)
		return (0);
	if (prog(argc, argv) == 0)
		write(1, "Alert!!!\n", 9);
	return (0);
}
