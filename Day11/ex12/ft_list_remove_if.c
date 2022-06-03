/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaucoul <vvaucoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 04:55:50 by vvaucoul          #+#    #+#             */
/*   Updated: 2018/08/21 06:36:38 by vvaucoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *remove;
	t_list *elem;

	elem = begin_list[0];
	while (elem && elem->next)
	{
		if ((*cmp)(elem->next->data, data_ref) == 0)
		{
			remove = elem->next;
			elem->next = elem->next->next;
			free(remove);
		}
		elem = elem->next;
	}
	elem = begin_list[0];
	if (elem && (*cmp)(elem->data, data_ref) == 0)
	{
		begin_list[0] = elem->next;
		free(elem);
	}
}
