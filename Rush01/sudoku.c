/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yforeau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 23:39:28 by yforeau           #+#    #+#             */
/*   Updated: 2018/08/12 23:41:37 by yforeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_grid(int grid[9][9])
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			ft_putchar(grid[i][j] + 48);
			if (j < 8)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int		abs_line(int k, int grid[9][9], int i)
{
	int j;

	j = 0;
	while (j < 9)
	{
		if (grid[i][j] == k)
			return (0);
		j++;
	}
	return (1);
}

int		abs_col(int k, int grid[9][9], int j)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (grid[i][j] == k)
			return (0);
		i++;
	}
	return (1);
}

int		abs_block(int k, int grid[9][9], int i, int j)
{
	int ib;
	int jb;

	ib = i - (i % 3);
	jb = j - (j % 3);
	i = ib;
	while (i < ib + 3)
	{
		j = jb;
		while (j < jb + 3)
		{
			if (grid[i][j] == k)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		is_solvable(int grid[9][9], int position)
{
	int i;
	int j;
	int k;

	i = position / 9;
	j = position % 9;
	if (position == 81)
		return (1);
	if (grid[i][j] != 0)
		return (is_solvable(grid, position + 1));
	k = 1;
	while (k < 10)
	{
		if (abs_line(k, grid, i) && abs_col(k, grid, j)
			&& abs_block(k, grid, i, j))
		{
			grid[i][j] = k;
			if (is_solvable(grid, position + 1))
				return (1);
		}
		k++;
	}
	grid[i][j] = 0;
	return (0);
}
