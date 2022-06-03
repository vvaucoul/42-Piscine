/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yforeau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 23:33:25 by yforeau           #+#    #+#             */
/*   Updated: 2018/08/12 23:36:54 by yforeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	error();
int		check_args(char **argv, int grid[9][9]);
int		is_solvable(int grid[9][9], int position);
void	print_grid(int grid[9][9]);

int		main(int argc, char **argv)
{
	int	grid[9][9];

	(void)argc;
	if (check_args(++argv, grid) && is_solvable(grid, 0))
		print_grid(grid);
	else
		error();
	return (0);
}
