/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaucoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 16:56:05 by vvaucoul          #+#    #+#             */
/*   Updated: 2018/08/20 17:53:02 by vvaucoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"
#include "ft_opp.h"

int		ft_mul(int nb1, int nb2)
{
	return (nb1 * nb2);
}

int		ft_div(int nb1, int nb2)
{
	return (nb1 / nb2);
}

int		ft_mod(int nb1, int nb2)
{
	return (nb1 % nb2);
}

int		ft_usage(int nb1, int nb2)
{
	write(1, "error : only [ + - * / % ] are accepted.\n", 41);
	return (0);
}
