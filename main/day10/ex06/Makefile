# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kdereshe <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/05 20:11:30 by kdereshe          #+#    #+#              #
#    Updated: 2019/11/05 20:22:43 by kdereshe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op
SRCS = main.c oper.c
HEADER = includes/
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc -o $(NAME) $(SRCS) -L. -lft -I $(HEADER) $(FLSGS)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
