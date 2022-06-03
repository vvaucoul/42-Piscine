/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaucoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 01:20:39 by vvaucoul          #+#    #+#             */
/*   Updated: 2018/08/21 02:42:04 by vvaucoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	t_list	*tmp;
	int		i;

	if (!begin_list)
		return (0);
	i = 0;
	tmp = begin_list;
	while (tmp)
	{
		tmp = tmp->next;
		++i;
	}
	return (i);
}
