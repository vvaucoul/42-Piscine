/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleveque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 23:26:28 by bleveque          #+#    #+#             */
/*   Updated: 2018/08/05 15:30:40 by ccepre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int ax;
	int ay;

	ax = 0;
	ay = 0;
	while (ay < y)
	{
		ax = 0;
		while (ax < x)
		{
			if ((ax == 0 && ay == 0) || (ax == x - 1 && ay == y - 1))
				ft_putchar('/');
			else if ((ax == 0 && ay == y - 1) || (ax == x - 1 && ay == 0))
				ft_putchar('\\');
			else if ((ax != 0 && ax != x - 1) && (ay != 0 && ay != y - 1))
				ft_putchar(' ');
			else
				ft_putchar('*');
			ax++;
		}
		ft_putchar('\n');
		ay++;
	}
}
