/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaucoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 01:13:17 by vvaucoul          #+#    #+#             */
/*   Updated: 2018/08/21 01:20:04 by vvaucoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *elem;

	if (begin_list[0])
	{
		elem = ft_create_elem(data);
		elem->next = begin_list[0];
		begin_list[0] = elem;
	}
	else
		begin_list[0] = ft_create_elem(data);
}
