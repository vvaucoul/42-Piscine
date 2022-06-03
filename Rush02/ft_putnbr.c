/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaucoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 14:40:21 by vvaucoul          #+#    #+#             */
/*   Updated: 2018/08/19 17:02:46 by vvaucoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my.h"

void	ft_display_nbr(int nb)
{
	unsigned int f_num;

	f_num = nb;
	if (f_num >= 10)
	{
		ft_display_nbr(f_num / 10);
		ft_display_nbr(f_num % 10);
	}
	else
		ft_putchar(f_num + '0');
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	ft_display_nbr(nb);
}
