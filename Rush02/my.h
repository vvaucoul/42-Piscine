/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaucoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 14:55:23 by vvaucoul          #+#    #+#             */
/*   Updated: 2018/08/19 22:40:07 by vvaucoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_H
# define MY_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

int		get_lines(char *str);
int		get_col(char *str);
char	*ft_realloc(char *str, char c);
int		ft_strbn(char *str, int i);
int		ft_strlen(char *str);
char	*get_first_line(char *str, int col, int lines);
char	*get_last_line(char *str, int lines, int col);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
int		ft_colle_exec(char *str, int col, int lines, char *comp);
void	ft_colle_add(int **allcolles, int *i, int colle);
int		*ft_colle(char *str, int col, int lines);

#endif
