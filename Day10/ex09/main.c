/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaucoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 03:30:00 by vvaucoul          #+#    #+#             */
/*   Updated: 2018/08/17 11:35:20 by vvaucoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

void	ft_puterror(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		++i;
	}
}

void	error(void)
{
	ft_putchar('0');
	ft_putchar('\n');
}

int		check_error(t_do_op *do_op, int ac, char **av)
{
	if (ac != 4)
		return (0);
	if (args(av, do_op) == 0)
	{
		error();
		return (0);
	}
	if (do_op->right_nbr == 0 && do_op->op == '/')
	{
		ft_putstr("Stop : division by zero\n");
		return (0);
	}
	if (do_op->right_nbr == 0 && do_op->op == '%')
	{
		ft_putstr("Stop : modulo by zero\n");
		return (0);
	}
	return (1);
}

int		main(int ac, char **av)
{
	t_do_op		do_op;
	int			i;
	char		*op;
	t_op_fun	*op_fun;

	if (check_error(&do_op, ac, av) == 0)
		return (0);
	op = "+-*/%\0";
	op_fun = (t_op_fun[])
		{ope, sou, mult, div, mod};
	i = 0;
	while (op[i])
	{
		if (op[i] == do_op.op)
		{
			ft_putnbr(op_fun[i](&do_op));
			ft_putchar('\n');
			return (0);
		}
		++i;
	}
	ft_putchar('0');
	ft_putchar('\n');
	return (0);
}
