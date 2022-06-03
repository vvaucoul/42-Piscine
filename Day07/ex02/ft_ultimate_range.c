/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaucoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 16:07:45 by vvaucoul          #+#    #+#             */
/*   Updated: 2018/08/13 18:36:05 by vvaucoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	i = 0;
	range[0] = malloc(sizeof(int) * (max - min));
	if (range == NULL)
		return (0);
	while (min < max)
	{
		range[0][i] = min;
		++min;
		++i;
	}
	return (i);
}
