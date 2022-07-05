# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ptunkevi <ptunkevi@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/04 16:21:41 by ptunkevi          #+#    #+#              #
#    Updated: 2022/06/12 22:42:38 by ptunkevi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I.

SRCM = ft_calloc.c \
ft_isalnum.c \
ft_isalpha.c \
ft_isascii.c \
ft_isdigit.c \
ft_isprint.c \
ft_itoa.c \
ft_memchr.c \
ft_memcmp.c \
ft_memcpy.c \
ft_memmove.c \
ft_memset.c \
ft_split.c \
ft_strchr.c \
ft_strdup.c \
ft_strjoin.c \
ft_strlcat.c \
ft_strlcpy.c \
ft_strlen.c \
ft_strnstr.c \
ft_strrchr.c \
ft_strtrim.c \
ft_substr.c \
ft_toupper.c \
ft_tolower.c \
ft_strncmp.c \
ft_bzero.c \
ft_atoi.c \
ft_strmapi.c \
ft_striteri.c \
ft_putchar_fd.c \
ft_putstr_fd.c \
ft_putendl_fd.c \
ft_putnbr_fd.c \

OBJM = $(SRCM:.c=.o)
CFLAGS = -Wall -Wextra -Werror -I.
NAME = libft.a
CC = gcc

$(NAME): $(OBJM) libft.h
	ar cr $(NAME) $^

all: $(NAME)

clean:
	rm -rf $(OBJM)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all re clean fclean