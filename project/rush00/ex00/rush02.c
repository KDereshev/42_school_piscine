/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdereshe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 17:42:05 by kdereshe          #+#    #+#             */
/*   Updated: 2019/10/27 18:37:45 by kdereshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int y, int x)
{
	int i;
	int j;

	if (y < 0)
		return ;
	i = 1;
	while (i <= x)
	{
		j = 1;
		while (j <= y)
		{
			if ((i == 1 && j == 1) || (i == 1 && y == j))
				ft_putchar('A');
			else if ((j == 1 && i == x) || (i == x && y == j))
				ft_putchar('C');
			else if (i == 1 || i == x || j == 1 || j == y)
				ft_putchar('B');
			else
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
