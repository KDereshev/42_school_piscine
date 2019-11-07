/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdereshe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 10:26:54 by kdereshe          #+#    #+#             */
/*   Updated: 2019/11/06 10:27:28 by kdereshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *elem;

	elem = ft_create_elem(data);
	elem->next = *begin_list;
	*begin_list = elem;
}

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*list;
	int		i;

	list = 0;
	i = 1;
	while (i < ac)
		ft_list_push_front(&list, av[i++]);
	return (list);
}
