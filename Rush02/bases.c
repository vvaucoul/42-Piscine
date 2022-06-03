/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bases.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaucoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 21:06:12 by vvaucoul          #+#    #+#             */
/*   Updated: 2018/08/19 22:12:15 by vvaucoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my.h"

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

int		ft_strbn(char *str, int i)
{
	while (str[i] && str[i] != '\n')
		++i;
	return (i);
}

char	*ft_realloc(char *str, char c)
{
	char	*dest;
	int		i;

	i = 0;
	dest = malloc(sizeof(char) * (ft_strlen(str) + 2));
	while (str[i])
	{
		dest[i] = str[i];
		++i;
	}
	dest[i] = c;
	dest[i + 1] = '\0';
	return (dest);
}
