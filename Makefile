# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlancelo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/26 02:27:15 by mlancelo          #+#    #+#              #
#    Updated: 2024/10/26 19:14:05 by mlancelo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

SRC =	ft_printf.c \
		ft_printf_adr.c\
		ft_printf_hex.c\

OBJ =	$(SRC:.c=.o)

CFLAGS += -Wall -Wextra -Werror

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
