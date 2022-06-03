/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaucoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 12:31:51 by vvaucoul          #+#    #+#             */
/*   Updated: 2018/08/19 13:35:29 by vvaucoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my.h"

int		get_number(char **expr)
{
	int nbr;

	while (**expr == ' ')
		(*expr)++;
	if (**expr == '(')
	{
		(*expr)++;
		nbr = get_operators(expr);
		if (**expr == ')')
			(*expr)++;
		return (nbr);
	}
	return (str_to_int(expr));
}

int		get_operators_2(char **expr)
{
	int		nbr;
	int		nbr2;
	char	op;

	nbr = get_number(expr);
	while (**expr)
	{
		while (**expr == ' ')
			(*expr)++;
		op = **expr;
		if (op != '/' && op != '*' && op != '%')
			return (nbr);
		(*expr)++;
		nbr2 = get_number(expr);
		if (op == '/')
			nbr /= nbr2;
		else if (op == '*')
			nbr *= nbr2;
		else
			nbr %= nbr2;
	}
	return (nbr);
}

int		get_operators(char **expr)
{
	int		nbr;
	int		nbr2;
	char	op;

	nbr = get_operators_2(expr);
	while (**expr)
	{
		while (**expr == ' ')
			(*expr)++;
		op = **expr;
		if (op != '+' && op != '-')
			return (nbr);
		(*expr)++;
		nbr2 = get_operators_2(expr);
		if (op == '+')
			nbr += nbr2;
		else
			nbr -= nbr2;
	}
	return (nbr);
}

int		eval_expr(char *expr)
{
	return (get_operators(&expr));
}
