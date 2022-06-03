#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vvaucoul <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/13 16:37:23 by vvaucoul          #+#    #+#              #
#    Updated: 2018/08/20 03:03:00 by vvaucoul         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

CC		=	gcc

SRCS	=	srcs/ft_putchar.c	 	\
			srcs/ft_putstr.c		\
			srcs/ft_strcmp.c		\
			srcs/ft_strlen.c		\
			srcs/ft_swap.c

NAME 	= libft.a

CFLAGS	=	-c -Wall -Wextra -Werror

INCLUDES = -I./includes/

all: 	$(NAME)

$(NAME):
		$(CC) $(CFLAGS) $(SRCS) $(INCLUDES)
		ar rc $(NAME) ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
		ranlib $(NAME)

clean:
		rm -rf *.o

fclean: clean
		rm -rf $(NAME)

re: fclean all
