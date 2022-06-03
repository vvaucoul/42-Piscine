/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaucoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 00:18:52 by vvaucoul          #+#    #+#             */
/*   Updated: 2018/08/09 00:46:54 by vvaucoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int to_find_size;

	i = 0;
	j = 0;
	to_find_size = 0;
	if (to_find == 0)
		return (str);
	while (to_find[to_find_size])
		++to_find_size;
	while (str[i])
	{
		while (to_find[j] == str[i + j])
		{
			if (j == to_find_size - 1)
				return (str + i);
			++j;
		}
		j = 0;
		++i;
	}
	return (0);
}
