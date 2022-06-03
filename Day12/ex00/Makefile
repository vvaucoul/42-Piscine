#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vvaucoul <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/13 16:37:23 by vvaucoul          #+#    #+#              #
#    Updated: 2018/08/20 21:24:41 by vvaucoul         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

CC		=	gcc

SRCS	=	main.c

NAME 	=	ft_display_file

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