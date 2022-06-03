/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaucoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 14:34:12 by vvaucoul          #+#    #+#             */
/*   Updated: 2018/08/10 11:28:28 by vvaucoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		printable(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

int		ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	if (str == 0)
		return (1);
	while (str[i])
	{
		if (printable(str[i]) == 0)
			return (0);
		++i;
	}
	return (1);
}
