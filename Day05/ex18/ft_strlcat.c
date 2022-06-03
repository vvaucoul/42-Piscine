/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaucoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 19:12:04 by vvaucoul          #+#    #+#             */
/*   Updated: 2018/08/09 14:07:30 by vvaucoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int s_save;

	i = ft_strlen(dest);
	j = 0;
	s_save = size;
	while (size)
	{
		dest[i + j] = src[j];
		++j;
		--size;
	}
	dest[i + j] = '\0';
	return (i + j);
}
