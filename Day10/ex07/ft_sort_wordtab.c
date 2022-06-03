/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaucoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 11:36:39 by vvaucoul          #+#    #+#             */
/*   Updated: 2018/08/20 16:24:08 by vvaucoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		++i;
	}
	return (0);
}

void	ft_swap(char **s1, char **s2)
{
	char *temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

void	ft_sort_wordtab(char **tab)
{
	int y;

	y = 0;
	while (tab[y] != 0)
	{
		if (tab[y + 1] && ft_strcmp(tab[y], tab[y + 1]) > 0)
		{
			ft_swap(&tab[y], &tab[y + 1]);
			y = 0;
		}
		else
			++y;
	}
}
