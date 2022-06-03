/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaucoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 23:47:01 by vvaucoul          #+#    #+#             */
/*   Updated: 2018/08/06 19:57:35 by vvaucoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	char	c;
	int		str_size;
	int		i;

	i = 0;
	str_size = 0;
	while (str[str_size])
		++str_size;
	--str_size;
	while (i < str_size - 1)
	{
		c = str[i];
		str[i] = str[str_size];
		str[str_size] = c;
		++i;
		--str_size;
	}
	return (str);
}
