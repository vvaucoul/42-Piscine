/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaucoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 04:10:24 by vvaucoul          #+#    #+#             */
/*   Updated: 2018/08/17 11:28:59 by vvaucoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H

# include <unistd.h>

typedef struct	s_do_op
{
	int			left_nbr;
	int			right_nbr;
	char		op;
}				t_do_op;

typedef int		(*t_op_fun)(t_do_op *);

int				args(char **av, t_do_op *do_op);
void			ft_puterror(char *str);

int				ope(t_do_op *do_op);
int				sou(t_do_op *do_op);
int				mult(t_do_op *do_op);
int				div(t_do_op *do_op);
int				mod(t_do_op *do_op);

int				ft_atoi(char *str);
void			ft_putchar(char c);
void			ft_putnbr(int nb);
void			ft_putstr(char *str);

#endif
