/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdereshe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 20:20:51 by kdereshe          #+#    #+#             */
/*   Updated: 2019/11/05 20:52:37 by kdereshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "oper.h"

int		solve(int n1, int n2, char op)
{
	int				i;
	const t_func	any_func[6] = {{'+', &add}, {'-', &substr},
		{'*', &mult}, {'/', &div}, {'%', &mod}};

	i = 0;
	while (i < 6)
	{
		if (any_func[i].op == op)
			return (any_func[i].f(n1, n2));
		i++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int	num1;
	int	num2;
	int	ans;

	if (argc == 4)
	{
		num1 = ft_atoi(argv[1]);
		num2 = ft_atoi(argv[3]);
		if (num2 == 0 && argv[2][0] == '/')
			ft_putstr("Stop : division by zero\n");
		else if (num2 == 0 && argv[2][0] == '%')
			ft_putstr("Stop : modulo by zero\n");
		else
		{
			ans = solve(num1, num2, argv[2][0]);
			ft_putnbr(ans);
			ft_putchar('\n');
		}
	}
	return (0);
}
