/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaucoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 10:55:42 by vvaucoul          #+#    #+#             */
/*   Updated: 2018/08/06 18:16:05 by vvaucoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		calc_abs(int i, int j)
{
	if (i < j)
		return (j - i);
	else
		return (i - j);
}

void	init_while(int *t, int *y)
{
	t[0] = 1;
	y[0] = 0;
}

void	init(int *value, int *t, int *n_dames, int *size_echiquier)
{
	value[0] = 0;
	t[0] = 1;
	if (n_dames[0] == size_echiquier[0])
		++value[0];
}

int		calc_poss(int size_echiquier, int n_d, int *tab)
{
	int x;
	int y;
	int value;
	int t;

	init(&value, &t, &n_d, &size_echiquier);
	x = 0;
	while (x < size_echiquier)
	{
		init_while(&t, &y);
		while (y < n_d && !(tab[y] == x || calc_abs(tab[y], x) == n_d - y))
			++y;
		if (y < n_d)
		{
			++x;
			t = 0;
		}
		if (t != 0)
		{
			tab[n_d] = x;
			value += calc_poss(size_echiquier, n_d + 1, tab);
			++x;
		}
	}
	return (value);
}

int		ft_eight_queens_puzzle(void)
{
	int	tab[8];

	return (calc_poss(8, 0, tab));
}
