/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaucoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 17:57:14 by vvaucoul          #+#    #+#             */
/*   Updated: 2018/08/14 01:26:47 by vvaucoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

int		itoa(char *str)
{
	int i;
	int result;

	i = 0;
	result = 0;
	while (str[i])
	{
		result += str[i] - 48;
		result *= 10;
		++i;
	}
	result /= 10;
	return (result);
}

char	*ft_rev_str(char *str)
{
	char	c;
	int		str_size;
	int		i;

	i = 0;
	str_size = 0;
	while (str[str_size])
		++str_size;
	--str_size;
	while (i <= str_size - 1)
	{
		c = str[i];
		str[i] = str[str_size];
		str[str_size] = c;
		++i;
		--str_size;
	}
	return (str);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*res;
	int		size_base;
	int		i;
	int		nb;

	i = 0;
	nb = itoa(nbr);
	size_base = ft_strlen(base_to);
	res = malloc(sizeof(char) * (ft_strlen(nbr) * ft_strlen(base_from)) * 10);
	while (nb > 0)
	{
		if (nb % size_base > 9)
			res[i] = (nb % size_base) + 48 + 7;
		else
			res[i] = (nb % size_base) + 48;
		nb /= size_base;
		++i;
	}
	res = ft_rev_str(res);
	return (res);
}
