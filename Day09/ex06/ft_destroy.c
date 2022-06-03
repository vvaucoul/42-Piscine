/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaucoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 10:48:30 by vvaucoul          #+#    #+#             */
/*   Updated: 2018/08/10 11:53:55 by vvaucoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_ultimator.h>
#include <stdlib.h>

void	ft_destroy(char ***factory)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (factory[y])
	{
		while (factory[y][x])
		{
			free(factory[y][x]);
			++x;
		}
		free(factory[y]);
		++y;
	}
	free(factory);
}
