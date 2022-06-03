#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vvaucoul <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/19 12:29:07 by vvaucoul          #+#    #+#              #
#    Updated: 2018/08/19 12:47:36 by vvaucoul         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

CC      =   gcc

SRCS    =   main.c          	\
			eval_expr.c			\
			ft_str_to_int.c		\
			ft_putchar.c		\
			ft_putnbr.c

NAME    =   eval_expr

CFLAGS  =    -Wall -Wextra -Werror

INCLUDES =  -I./

all:    $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRCS) $(INCLUDES) -o $(NAME)

clean:
		rm -rf *.o

fclean: clean
		rm -rf $(NAME)

re: fclean all