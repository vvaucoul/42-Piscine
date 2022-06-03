/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaucoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 17:44:16 by vvaucoul          #+#    #+#             */
/*   Updated: 2018/08/09 19:14:07 by vvaucoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_plus_2(int hour)
{
	if (hour == 25)
	{
		write(1, "01.00 A.M.", 10);
		return (1);
	}
	if (hour == 24)
	{
		write(1, "12.00 A.M.", 10);
		return (1);
	}
	if (hour == 12)
	{
		write(1, "12.00 P.M.", 10);
		return (1);
	}
	return (0);
}

void	ft_plus(int hour)
{
	if (ft_plus_2(hour) == 1)
		return ;
	if (hour > 0 && hour < 12)
	{
		hour %= 12;
		ft_putchar((hour / 10) + 48);
		ft_putchar((hour % 10) + 48);
		ft_putchar('.');
		write(1, "00 A.M.", 7);
	}
	else if (hour >= 12 && hour <= 24)
	{
		if (hour != 12 && hour != 24)
			hour %= 12;
		else if (hour == 24)
			hour = 12;
		ft_putchar((hour / 10) + 48);
		ft_putchar((hour % 10) + 48);
		ft_putchar('.');
		write(1, "00 P.M.", 7);
	}
}

void	ft_takes_place_2(int hour, int plus)
{
	if (hour != 12 && hour != 24)
		hour %= 12;
	else if (hour == 12)
	{
		write(1, "12.00 P.M. ", 11);
		write(1, "AND ", 4);
		ft_plus(plus + 1);
		return ;
	}
	else if (hour == 24)
		hour = 12;
	ft_putchar((hour / 10) + 48);
	ft_putchar((hour % 10) + 48);
	ft_putchar('.');
	write(1, "00 P.M. ", 8);
	write(1, "AND ", 4);
	ft_plus(plus + 1);
}

void	ft_takes_place(int hour)
{
	int plus;

	plus = hour;
	if (hour < 0 || hour > 24)
		return ;
	write(1, "THE FOLLOWING TAKES PLACE BETWEEN ", 34);
	if (hour == 0)
	{
		write(1, "12.00 P.M. ", 11);
		write(1, "AND ", 4);
		ft_plus(plus + 1);
	}
	if (hour > 0 && hour < 12)
	{
		ft_putchar((hour / 10) + 48);
		ft_putchar((hour % 10) + 48);
		ft_putchar('.');
		write(1, "00 A.M. ", 8);
		write(1, "AND ", 4);
		ft_plus(plus + 1);
	}
	else if (hour >= 12 && hour <= 24)
		ft_takes_place_2(hour, plus);
	ft_putchar('\n');
}
