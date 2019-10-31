/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdereshe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 16:30:49 by kdereshe          #+#    #+#             */
/*   Updated: 2019/10/30 18:45:54 by kdereshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	if (argc > 0)
		while (*argv[0])
			ft_putchar(*argv[0]++);
	ft_putchar('\n');
	return (0);
}
