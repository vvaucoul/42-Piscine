/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntayar <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 22:21:40 by ntayar            #+#    #+#             */
/*   Updated: 2018/08/12 23:33:44 by yforeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_args(char **argv, int grid[9][9])
{
	int position;
	int x;
	int y;

	position = -1;
	while (++position < 81)
	{
		x = position / 9;
		y = position % 9;
		if (!argv[x])
			return (0);
		if (!argv[x][y])
			return (0);
		if ((argv[x][y] < '1' || argv[x][y] > '9') && argv[x][y] != '.')
			return (0);
		if (argv[x][y] == '.')
			grid[x][y] = 0;
		else
			grid[x][y] = argv[x][y] - '0';
	}
	return (1);
}
