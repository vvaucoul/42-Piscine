/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_lines.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaucoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 21:08:11 by vvaucoul          #+#    #+#             */
/*   Updated: 2018/08/19 22:15:27 by vvaucoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my.h"

char	*get_first_line(char *str, int col, int lines)
{
	char	*fs;
	int		i;

	i = 0;
	if (col <= 1)
		return (&str[0]);
	fs = malloc(sizeof(char) * ((col * lines) + 1));
	while (i < ft_strbn(str, 0))
	{
		fs[i] = str[i];
		++i;
	}
	fs[i] = '\0';
	return (fs);
}

char	*get_last_line(char *str, int lines, int col)
{
	char	*fs;
	int		i;
	int		actu_lines;
	int		base_i;
	int		j;

	i = 0;
	j = 0;
	actu_lines = 0;
	while (str[i] != '\n')
		--i;
	++i;
	base_i = i;
	fs = malloc(sizeof(char) * ((col * lines) + 1));
	while (i < ft_strbn(str, base_i))
	{
		fs[j] = str[i];
		++i;
		++j;
	}
	fs[j] = '\0';
	return (fs);
}
