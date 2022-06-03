#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vvaucoul <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/13 16:37:23 by vvaucoul          #+#    #+#              #
#    Updated: 2018/08/20 16:55:59 by vvaucoul         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

CC		=	gcc

SRCS	=	main.c			\
			args.c			\
			atoi.c			\
			calc.c			\
			calc2.c			\
			ft_putchar.c	\
			ft_putnbr.c		\
			place_args.c	\
			ft_putstr.c

NAME 	=	ft_advanced_do-op

CFLAGS	=	 -Wall -Wextra -Werror

INCLUDES =	-I./

all: 	$(NAME)

$(NAME):
		$(CC) $(CFLAGS) $(SRCS) $(INCLUDES) -o $(NAME)

clean:
		rm -rf *.o

fclean: clean
		rm -rf $(NAME)

re:	fclean all