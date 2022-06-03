/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleveque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 23:26:28 by bleveque          #+#    #+#             */
/*   Updated: 2018/08/05 15:31:06 by ccepre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int ax;
	int ay;

	ax = 0;
	ay = 0;
	while (ay < y && x > 0)
	{
		ax = 0;
		while (ax < x)
		{
			if ((ay == 0 || ay == y - 1) && (ax == 0))
				ft_putchar('A');
			else if ((ay == 0 || ay == y - 1) && (ax == x - 1))
				ft_putchar('C');
			else if (ay == 0 || ay == y - 1 || ax == 0 || ax == x - 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
			ax++;
		}
		ft_putchar('\n');
		ay++;
	}
}
