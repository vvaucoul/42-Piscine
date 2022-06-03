/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaucoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 09:37:49 by vvaucoul          #+#    #+#             */
/*   Updated: 2018/08/06 23:53:04 by vvaucoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		get_next_prime(int n)
{
	int i;
	int j;
	int skip;

	j = 0;
	skip = 0;
	i = n + 1;
	while (i <= 2147483647)
	{
		j = 2;
		while (j < i && skip == 0)
		{
			if (i % j == 0)
				skip = 1;
			++j;
		}
		skip = 0;
		if (j == i)
			return (i);
		++i;
	}
	return (0);
}

int		ft_find_next_prime(int nb)
{
	int i;

	if (nb < 2)
		return (2);
	i = 2;
	while (i <= nb / 2)
	{
		if (nb % i == 0)
		{
			nb = get_next_prime(nb);
			return (nb);
		}
		++i;
	}
	return (nb);
}
