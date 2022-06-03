/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaucoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 04:58:21 by vvaucoul          #+#    #+#             */
/*   Updated: 2018/08/17 11:29:23 by vvaucoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int		ope(t_do_op *do_op)
{
	return (do_op->left_nbr + do_op->right_nbr);
}

int		sou(t_do_op *do_op)
{
	return (do_op->left_nbr - do_op->right_nbr);
}

int		mult(t_do_op *do_op)
{
	return (do_op->left_nbr * do_op->right_nbr);
}

int		div(t_do_op *do_op)
{
	return (do_op->left_nbr / do_op->right_nbr);
}

int		mod(t_do_op *do_op)
{
	return (do_op->left_nbr % do_op->right_nbr);
}
