#!/bin/sh
rm -rf *.o
gcc -c  ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
ar rc libft.a *.o
rm -rf *.o
ranlib libft.a
