/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaucoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 04:13:50 by vvaucoul          #+#    #+#             */
/*   Updated: 2018/08/21 04:28:24 by vvaucoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *), void
*data_ref, int (*cmp)(void *, void *))
{
	t_list *elem;

	elem = begin_list;
	while (elem)
	{
		if ((*cmp)(elem->data, data_ref) == 0)
			(*f)(elem->data);
		elem = elem->next;
	}
}
