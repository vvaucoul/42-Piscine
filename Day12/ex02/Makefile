# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vvaucoul <vvaucoul@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/13 16:37:23 by vvaucoul          #+#    #+#              #
#    Updated: 2018/08/23 11:38:10 by vvaucoul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		=	gcc

SRCS	=	main.c			\
			ft_atoi.c		\
			ft_strlen.c

NAME 	=	ft_tail

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
