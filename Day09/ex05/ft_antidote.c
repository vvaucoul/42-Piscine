/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaucoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 10:06:02 by vvaucoul          #+#    #+#             */
/*   Updated: 2018/08/10 10:45:49 by vvaucoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_antidote(int i, int j, int k)
{
	if (i > j)
	{
		if (i > k)
			return (j);
		if (j > k)
			return (k);
		else
			return (i);
	}
	else
	{
		if (i > k)
			return (i);
		if (j > k)
			return (k);
		else
			return (j);
	}
	return (0);
}
