/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle_2.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaucoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 18:17:33 by vvaucoul          #+#    #+#             */
/*   Updated: 2018/08/06 23:54:10 by vvaucoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		calc_abs(int i, int j)
{
	if (i < j)
		return (j - i);
	else
		return (i - j);
}

int		init(int *value, int *n_dames, int *size_echiquier)
{
	value[0] = 0;
	if (n_dames[0] == size_echiquier[0])
	{
		++value[0];
		return (1);
	}
	return (0);
}

void	display_tab(int size_echiquier, int *tab)
{
	int x;
	int y;

	x = 0;
	while (x < size_echiquier)
	{
		y = 0;
		while (y <= size_echiquier)
		{
			if (y == tab[x])
				ft_putchar(y + 48 + 1);
			++y;
		}
		++x;
	}
	ft_putchar('\n');
}

int		calc_poss(int size_echiquier, int n_d, int *tab)
{
	int x;
	int y;
	int value;

	if (init(&value, &n_d, &size_echiquier) == 1)
		display_tab(size_echiquier, tab);
	x = 0;
	while (x < size_echiquier)
	{
		y = 0;
		while (y < n_d && !(tab[y] == x || calc_abs(tab[y], x) == n_d - y))
			++y;
		if (y < n_d)
			++x;
		if (y >= n_d)
		{
			tab[n_d] = x;
			value += calc_poss(size_echiquier, n_d + 1, tab);
			++x;
		}
	}
	return (value);
}

int		ft_eight_queens_puzzle_2(void)
{
	int tab[8];

	return (calc_poss(8, 0, tab));
}
