/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaucoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 04:04:44 by vvaucoul          #+#    #+#             */
/*   Updated: 2018/08/21 04:08:50 by vvaucoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_reverse(t_list **begin_list)
{
	t_list *prev;
	t_list *actu;
	t_list *next;

	prev = NULL;
	actu = begin_list[0];
	while (actu != NULL)
	{
		next = actu->next;
		actu->next = prev;
		prev = actu;
		actu = next;
	}
	begin_list[0] = prev;
}
