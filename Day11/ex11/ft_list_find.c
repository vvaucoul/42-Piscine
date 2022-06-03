/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaucoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 04:28:58 by vvaucoul          #+#    #+#             */
/*   Updated: 2018/08/21 04:42:55 by vvaucoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list *elem;

	elem = begin_list;
	while (elem)
	{
		if ((*cmp)(elem->data, data_ref) == 0)
			return (elem);
		elem = elem->next;
	}
	return (0);
}
