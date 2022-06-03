/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaucoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 13:28:49 by vvaucoul          #+#    #+#             */
/*   Updated: 2018/08/15 11:25:27 by vvaucoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strinlen(int i, char *str)
{
	while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		++i;
	return (i);
}

int		ft_strlen(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			++j;
		++i;
	}
	++j;
	return (j * i);
}

void	increase_variables(int action, int *i, int *x, int *y)
{
	if (action == 0)
	{
		i[0] = 0;
		y[0] = 0;
		x[0] = 0;
	}
	else if (action == 1)
	{
		--i[0];
		x[0] = 0;
		++y[0];
		++i[0];
	}
	else if (action == 2)
	{
		++i[0];
		++x[0];
	}
}

void	up_i(char *str, int *i)
{
	while (str[i[0]] == ' ' || str[i[0]] == '\t' || str[i[0]] == '\n')
		++i[0];
}

char	**ft_split_whitespaces(char *str)
{
	char	**tab;
	int		i;
	int		y;
	int		x;

	increase_variables(0, &i, &x, &y);
	tab = malloc(sizeof(char *) * ft_strlen(str) + 1);
	while (str[i])
	{
		tab[y] = malloc(sizeof(char) * ft_strinlen(i, str) + 1);
		up_i(str, &i);
		while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		{
			tab[y][x] = str[i];
			increase_variables(2, &i, &x, &y);
		}
		tab[y][x] = '\0';
		up_i(str, &i);
		increase_variables(1, &i, &x, &y);
	}
	if (tab[0][0] == 0)
		tab[y - 1] = 0;
	tab[y] = 0;
	return (tab);
}
