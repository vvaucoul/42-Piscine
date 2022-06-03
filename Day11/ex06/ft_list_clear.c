/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaucoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 02:57:57 by vvaucoul          #+#    #+#             */
/*   Updated: 2018/08/21 03:04:58 by vvaucoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list **begin_list)
{
	t_list *tmp;

	if (!begin_list || !begin_list[0])
		return ;
	while (begin_list[0])
	{
		tmp = begin_list[0];
		begin_list[0] = begin_list[0]->next;
		free(tmp);
	}
	begin_list[0] = NULL;
}
