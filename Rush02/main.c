/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleveque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 11:18:17 by bleveque          #+#    #+#             */
/*   Updated: 2018/08/19 22:17:11 by vvaucoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my.h"

void	error(void)
{
	ft_putstr("aucune\n");
}

int		print_colle(int *colle, int lines, int col)
{
	int i;

	i = 0;
	if (colle[0] == -1)
	{
		error();
		return (0);
	}
	while (colle[i] != -1)
	{
		ft_putstr("[colle-0");
		ft_putnbr(colle[i]);
		ft_putstr("] [");
		ft_putnbr(col);
		ft_putstr("] [");
		ft_putnbr(lines);
		ft_putstr("]");
		if (colle[i + 1] != -1)
			ft_putstr(" || ");
		++i;
	}
	ft_putchar('\n');
	return (0);
}

int		main(void)
{
	char	buffer;
	char	*str;
	int		lines;
	int		col;
	int		fc;

	str = malloc(sizeof(char *) * 1);
	fc = 1;
	while (fc != 0)
	{
		fc = read(0, &buffer, 1);
		str = ft_realloc(str, buffer);
	}
	col = get_col(str);
	lines = get_lines(str);
	print_colle(ft_colle(str, col, lines), lines, col);
	return (0);
}
