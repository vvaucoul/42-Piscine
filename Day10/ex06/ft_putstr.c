/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaucoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 23:34:40 by vvaucoul          #+#    #+#             */
/*   Updated: 2018/08/17 11:11:53 by vvaucoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		++i;
	}
}
