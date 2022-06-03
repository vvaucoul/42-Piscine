/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaucoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 10:50:34 by vvaucoul          #+#    #+#             */
/*   Updated: 2018/08/06 14:15:36 by vvaucoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int j;
	int c;

	j = 0;
	while (j < size - 1)
	{
		if (tab[j] > tab[j + 1])
		{
			c = tab[j + 1];
			tab[j + 1] = tab[j];
			tab[j] = c;
			j = 0;
		}
		else
			++j;
	}
}
