/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaucoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 11:11:18 by vvaucoul          #+#    #+#             */
/*   Updated: 2018/08/19 22:13:52 by vvaucoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my.h"

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int j;

	i = 1;
	j = 2;
	if (n == 2 && s1[0] == s2[0] && s1[1] == s2[2])
		return (0);
	else if (n == 1 && s1[0] == s2[0])
		return (0);
	while (s1[i] == s2[1])
		++i;
	if (s1[i] != s2[j])
		return (s1[i] - s2[j]);
	return (0);
}
