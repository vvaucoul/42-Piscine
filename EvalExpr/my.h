/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaucoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 12:30:17 by vvaucoul          #+#    #+#             */
/*   Updated: 2018/08/19 13:44:08 by vvaucoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_H
# define MY_H

# include <stdlib.h>
# include <unistd.h>

int		eval_expr(char *expr);

int		get_operators(char **expr);

int		get_operators_2(char **expr);

int		get_numbers(char **expr);

void	ft_putchar(char c);

void	ft_putnbr(int nbr);

int		str_to_int(char **str);

#endif
