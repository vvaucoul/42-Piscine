/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaucoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 10:53:32 by vvaucoul          #+#    #+#             */
/*   Updated: 2018/08/14 13:26:38 by vvaucoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		is_charset(char c, char *charset)
{
	int i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		++i;
	}
	return (0);
}

int		count_charset(int i, char *str, char *charset)
{
	int j;

	j = 0;
	while (str[i])
	{
		if (is_charset(str[i], charset) == 1)
			return (j + 1);
		++i;
		++j;
	}
	return (j + 1);
}

int		ft_strlen(char *str, char *charset)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (is_charset(str[i], charset) == 1)
			++j;
		++i;
	}
	++j;
	return (j * i);
}

void	init_increase(int action, int *i, int *y, int *x)
{
	if (action == 0)
	{
		i[0] = 0;
		y[0] = 0;
		x[0] = 0;
	}
	else if (action == 1)
	{
		x[0] = 0;
		++y[0];
		++i[0];
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		i;
	int		y;
	int		x;

	init_increase(0, &i, &y, &x);
	if (str == 0 || charset == 0)
		return (0);
	tab = malloc(sizeof(char *) * ft_strlen(str, charset));
	while (str[i])
	{
		while (is_charset(str[i], charset) == 1)
			++i;
		tab[y] = malloc(sizeof(char) * (count_charset(i, str, charset)));
		while (is_charset(str[i], charset) != 1)
		{
			tab[y][x] = str[i];
			++i;
			++x;
		}
		tab[y][x] = '\0';
		init_increase(1, &i, &y, &x);
	}
	tab[y] = 0;
	return (tab);
}
