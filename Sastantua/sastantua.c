/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaucoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 01:11:44 by vvaucoul          #+#    #+#             */
/*   Updated: 2018/08/05 20:05:09 by vvaucoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sastantua.h"

void	ft_putchar(char c);

int		calc_largeur(int a)
{
	if (a == 0)
		return (7);
	return (calc_largeur(a - 1) + 2 * (1 + (3 + a) + ((a % 2) + (a / 2))));
}

int		door_2(t_sastantua *s_sa, int pi)
{
	int val1;
	int val2;
	int val3;

	val1 = (s_sa->l / 2) + (s_sa->h - s_sa->y) + s_sa->size / 2 - pi;
	val2 = (s_sa->l / 2) + (s_sa->h - s_sa->y) + s_sa->size / 2 - 1 - pi;
	val3 = s_sa->y == s_sa->h - s_sa->size - 1 / 2 + s_sa->size / 2;
	if (s_sa->x >= ((s_sa->l / 2) + (s_sa->h - s_sa->y)) - s_sa->size / 2 + pi)
	{
		if (s_sa->x <= val1)
		{
			if ((s_sa->x == val2)
				&& val3
				&& s_sa->size >= 5)
				ft_putchar('$');
			else
				ft_putchar('|');
			return (1);
		}
	}
	return (0);
}

int		door(t_sastantua *s_sa)
{
	int pi;

	if (s_sa->size % 2 == 0)
		pi = 1;
	else
		pi = 0;
	if (s_sa->actu_etage + 1 == s_sa->size)
	{
		if (s_sa->y >= s_sa->h - s_sa->size + pi)
			if (door_2(s_sa, pi) == 1)
				return (1);
	}
	return (0);
}

void	etages(t_sastantua *s_sa)
{
	s_sa->y = 0;
	while (s_sa->y < s_sa->h)
	{
		s_sa->x = -s_sa->d;
		while (s_sa->x < s_sa->h - 1 - s_sa->y)
		{
			ft_putchar(' ');
			++s_sa->x;
		}
		s_sa->x += s_sa->h + 1 - s_sa->y;
		ft_putchar('/');
		while (s_sa->x < s_sa->l)
		{
			if (door(s_sa) != 1)
				ft_putchar('*');
			++s_sa->x;
		}
		ft_putchar('\\');
		ft_putchar('\n');
		++s_sa->y;
	}
}

void	sastantua(int size)
{
	t_sastantua s_sa;
	int			val1;

	if (size < 0)
		return ;
	s_sa.size = size;
	s_sa.actu_etage = 0;
	while (s_sa.actu_etage < s_sa.size)
	{
		val1 = calc_largeur(s_sa.size - 1);
		val1 -= calc_largeur(s_sa.actu_etage);
		val1 /= 2;
		s_sa.d = val1;
		s_sa.h = 3 + s_sa.actu_etage;
		s_sa.l = calc_largeur(s_sa.actu_etage);
		etages(&s_sa);
		++s_sa.actu_etage;
	}
}
