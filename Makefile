# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlancelo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/23 00:42:45 by mlancelo          #+#    #+#              #
#    Updated: 2024/10/23 12:13:03 by mlancelo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

SRC =	ft_printf.c \

OBJ =	$(SRC:.c=.o)

CFLAGS += -Wall -Wextra -Werror -g

NAME =	libftprintf.a

all:	$(NAME) $(OBJ)

$(NAME): $(OBJ)
	ar r $(NAME) $(OBJ)
	

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME) $(OBJ)

re:	fclean all

.PHONY: all clean fclean re
