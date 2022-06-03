/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvaucoul <vvaucoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 03:06:16 by vvaucoul          #+#    #+#             */
/*   Updated: 2018/08/22 11:25:31 by vvaucoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list			*elem;

	if (begin_list == NULL)
		return (NULL);
	elem = begin_list;
	while (nbr > 0)
	{
		if (!elem)
			return (0);
		elem = elem->next;
		--nbr;
	}
	return (elem);
}
