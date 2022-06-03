/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaucoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 22:08:41 by vvaucoul          #+#    #+#             */
/*   Updated: 2018/08/19 22:12:54 by vvaucoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my.h"

int		ft_colle_exec(char *str, int col, int lines, char *comp)
{
	if ((ft_strncmp(get_first_line(str, col, lines), comp, col) == 0))
		return (1);
	return (0);
}

void	ft_colle_add(int **allcolles, int *i, int colle)
{
	allcolles[0][i[0]] = colle;
	++i[0];
}

int		*ft_colle(char *str, int col, int lines)
{
	int i;
	int *allcolles;

	i = 0;
	allcolles = 0;
	allcolles = malloc(sizeof(int) * 5);
	if (ft_colle_exec(str, col, lines, "o-o") == 1)
		ft_colle_add(&allcolles, &i, 0);
	if (ft_colle_exec(str, col, lines, "/*\\") == 1)
		ft_colle_add(&allcolles, &i, 1);
	if (ft_colle_exec(str, col, lines, "ABA") == 1)
		ft_colle_add(&allcolles, &i, 2);
	if (ft_colle_exec(str, col, lines, "ABC") == 1)
		ft_colle_add(&allcolles, &i, 3);
	if (ft_colle_exec(str, col, lines, "ABC") == 1)
		ft_colle_add(&allcolles, &i, 4);
	allcolles[i] = -1;
	return (allcolles);
}
