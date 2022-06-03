/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaucoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 04:20:58 by vvaucoul          #+#    #+#             */
/*   Updated: 2018/08/16 18:37:07 by vvaucoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

char	set_op(char *str)
{
	if (str[1] != '\0')
		return (0);
	if (str[0] == '+' || str[0] == '-' || str[0] == '*' ||
		str[0] == '%' || str[0] == '/')
		return (str[0]);
	return (0);
}

int		is_num(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			++i;
		else
			return (0);
	}
	return (1);
}

int		set_arg(char *str)
{
	int i;
	int result;
	int has_nbr;
	int is_neg;

	i = 0;
	result = 0;
	has_nbr = 0;
	is_neg = 0;
	while ((str[i] < '0' || str[i] > '9') && str[i])
		++i;
	if (str[i - 1] == '-')
		is_neg = 1;
	if ((str[0] < '0' || str[0] > '9') && (str[1] < '0' || str[1] > '9'))
		return (0);
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		result *= 10;
		result += str[i] - 48;
		++i;
	}
	if (is_neg == 1)
		result *= -1;
	return (result);
}

int		args(char **av, t_do_op *do_op)
{
	do_op->left_nbr = set_arg(av[1]);
	if ((do_op->op = set_op(av[2])) == 0)
		return (0);
	do_op->right_nbr = set_arg(av[3]);
	return (1);
}
