#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vvaucoul <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/13 16:37:23 by vvaucoul          #+#    #+#              #
#    Updated: 2018/08/19 22:10:14 by vvaucoul         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

CC		=	gcc

SRCS	=	main.c			\
			ft_putnbr.c		\
			ft_putchar.c	\
			ft_putstr.c		\
			ft_strncmp.c	\
			get_params.c	\
			bases.c			\
			get_lines.c		\
			colle.c

NAME 	=	colle-2

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