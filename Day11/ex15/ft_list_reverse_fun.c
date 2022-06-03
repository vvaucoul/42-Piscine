/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaucoul <vvaucoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 07:01:41 by vvaucoul          #+#    #+#             */
/*   Updated: 2018/08/21 14:55:02 by vvaucoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse_fun(t_list *begin_list)
{
	t_list	*elem;
	int		c;
	int		i;
	int		j;
	void	*tmp;

	c = 0;
	elem = begin_list;
	while (elem && ++c)
		elem = elem->next;
	--c;
	while (i < c)
	{
		j = i;
		elem = begin_list;
		while (elem && elem->next && j < c)
		{
			tmp = elem->data;
			elem->data = elem->next->data;
			elem->next->data = tmp;
			elem = elem->next;
			++j;
		}
		++i;
	}
}
