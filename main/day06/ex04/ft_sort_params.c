/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdereshe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 18:37:00 by kdereshe          #+#    #+#             */
/*   Updated: 2019/10/30 19:08:50 by kdereshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_p(char *str)
{
	while (*str)
		ft_putchar(*str++);
	ft_putchar('\n');
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] < s2[i])
			return (-1);
		else if (s1[i] > s2[i])
			return (1);
		i++;
	}
	return (0);
}

void	sort_ascii(int argc, char **argv)
{
	int		i;
	int		c;
	char	*swap;

	i = 1;
	c = 0;
	while (c == 0 && i < argc)
	{
		c = 1;
		i = 1;
		while (i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				swap = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = swap;
				c = 0;
			}
			i++;
		}
	}
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc > 1)
	{
		sort_ascii(argc, argv);
		while (i < argc)
			ft_p(argv[i++]);
	}
	return (0);
}
