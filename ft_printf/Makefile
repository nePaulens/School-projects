# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ptunkevi <ptunkevi@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/21 04:12:16 by ptunkevi          #+#    #+#              #
#    Updated: 2022/07/21 04:12:32 by ptunkevi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCM = ft_printf.c \
cases.c \
func.c \
func_two.c \

CC = gcc
OBJM = $(SRCM:.c=.o)
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a

$(NAME): $(OBJM) ft_printf.h
	ar cr $(NAME) $^

all: $(NAME)

clean:
	rm -rf $(OBJM)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all re clean fclean