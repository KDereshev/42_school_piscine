/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   oper.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdereshe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 20:19:23 by kdereshe          #+#    #+#             */
/*   Updated: 2019/11/05 20:59:49 by kdereshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPER_H
# define OPER_H

typedef int		(*t_funcptr)(int, int);

typedef	struct	s_func
{
	char		op;
	t_funcptr	f;
}				t_func;

void			ft_putchar(char c);
void			ft_putstr(char *str);
void			ft_putnbr(int nb);
int				ft_atoi(const char *str);
int				add(int a, int b);
int				substr(int a, int b);
int				mult(int a, int b);
int				div(int a, int b);
int				mod(int a, int b);

#endif
