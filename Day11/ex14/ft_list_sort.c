/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaucoul <vvaucoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 06:43:40 by vvaucoul          #+#    #+#             */
/*   Updated: 2018/08/21 07:00:37 by vvaucoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list *elem_1;
	t_list *elem_2;
	t_list *next;

	elem_1 = begin_list[0];
	while (elem_1)
	{
		elem_2 = begin_list[0];
		while (elem_2->next)
		{
			if ((*cmp)(elem_2->data, elem_2->next->data) > 0)
			{
				next = elem_2->data;
				elem_2->data = elem_2->next->data;
				elem_2->next->data = next;
			}
			elem_2 = elem_2->next;
		}
		elem_1 = elem_1->next;
	}
}
