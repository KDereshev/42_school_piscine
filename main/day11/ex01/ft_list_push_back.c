/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdereshe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 09:35:26 by kdereshe          #+#    #+#             */
/*   Updated: 2019/11/06 09:36:11 by kdereshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *elem;

	if (*begin_list)
	{
		elem = *begin_list;
		while (elem->next)
			elem = elem->next;
		elem->next = ft_create_elem(data);
	}
	else
	{
		*begin_list = ft_create_elem(data);
	}
}
