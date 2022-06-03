/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaucoul <vvaucoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 06:39:20 by vvaucoul          #+#    #+#             */
/*   Updated: 2018/08/21 06:43:19 by vvaucoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*elem;

	if (!begin_list1 || !begin_list1[0])
		begin_list1[0] = begin_list2;
	else
	{
		elem = begin_list1[0];
		while (elem->next)
			elem = elem->next;
		elem->next = begin_list2;
	}
}
