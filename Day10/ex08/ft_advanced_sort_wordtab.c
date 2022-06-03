/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaucoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 16:25:23 by vvaucoul          #+#    #+#             */
/*   Updated: 2018/08/20 16:41:39 by vvaucoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char **s1, char **s2)
{
	char *temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	int y;

	y = 0;
	while (tab[y] != 0)
	{
		if (tab[y + 1] && (*cmp)(tab[y], tab[y + 1]) > 0)
		{
			ft_swap(&tab[y], &tab[y + 1]);
			y = 0;
		}
		else
			++y;
	}
}
