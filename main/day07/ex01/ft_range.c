/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdereshe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 09:26:55 by kdereshe          #+#    #+#             */
/*   Updated: 2019/10/31 10:22:25 by kdereshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *a;
	int i;

	if (min >= max)
		return (0);
	a = (int*)malloc(sizeof(int) * (max - min));
	i = 0;
	while (min < max)
	{
		a[i] = min;
		i++;
		min++;
	}
	return (a);
}
