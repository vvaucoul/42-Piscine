/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaucoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 11:31:49 by vvaucoul          #+#    #+#             */
/*   Updated: 2018/08/15 13:59:07 by vvaucoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"
#include <unistd.h>

void					ft_display_nbr(int nb)
{
	unsigned int f_num;

	f_num = nb;
	if (f_num >= 10)
	{
		ft_display_nbr(f_num / 10);
		ft_display_nbr(f_num % 10);
	}
	else
	{
		ft_putchar(f_num + '0');
	}
}

void					ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	ft_display_nbr(nb);
}

void					ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		++i;
	}
}

void					ft_show_tab(struct s_stock_par *par)
{
	int i;
	int j;
	int y;

	i = 0;
	j = 0;
	y = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		ft_putchar('\n');
		ft_putnbr(par[i].size_param);
		ft_putchar('\n');
		while (par[i].tab[y])
		{
			ft_putstr(par[i].tab[y]);
			ft_putchar('\n');
			++y;
		}
		y = 0;
		++i;
	}
}
