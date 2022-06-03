/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_params.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaucoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 19:35:50 by vvaucoul          #+#    #+#             */
/*   Updated: 2018/08/19 22:15:52 by vvaucoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my.h"

int		get_lines(char *str)
{
	int i;
	int lines;

	i = 0;
	lines = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			++lines;
		++i;
	}
	--lines;
	return (lines);
}

int		get_col(char *str)
{
	int i;

	i = 0;
	while (str[i] && str[i] != '\n')
		++i;
	return (i);
}
