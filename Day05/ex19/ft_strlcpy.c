/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaucoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 12:44:38 by vvaucoul          #+#    #+#             */
/*   Updated: 2018/08/09 10:26:42 by vvaucoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int result;

	i = 0;
	result = 0;
	while (src[result])
		++result;
	while (src[i] && i < size - 1)
	{
		if (i < size - 1)
			dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
	return (result);
}
