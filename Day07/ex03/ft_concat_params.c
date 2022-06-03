/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaucoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 21:50:24 by vvaucoul          #+#    #+#             */
/*   Updated: 2018/08/15 03:24:38 by vvaucoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

char	*ft_strcat(char *dest, char *src, int argc, int y)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		++i;
	while (src[j])
	{
		dest[i] = src[j];
		++j;
		++i;
	}
	if (y < argc - 1)
		dest[i] = '\n';
	else
		dest[i] = '\0';
	return (dest);
}

int		arg_size(char **tab)
{
	int x;
	int y;
	int k;

	x = 0;
	y = 0;
	k = 0;
	while (tab[y])
	{
		while (tab[y][x])
		{
			++x;
			++k;
		}
		x = 0;
		++y;
		++k;
	}
	return (k * k);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		y;

	y = 1;
	str = malloc(sizeof(char) * arg_size(argv));
	while (y < argc)
	{
		str = ft_strcat(str, argv[y], argc, y);
		++y;
	}
	return (str);
}
