# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nfranco- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/01 12:20:58 by nfranco-          #+#    #+#              #
#    Updated: 2020/03/02 19:30:19 by nfranco-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#declaring variables

NAME = libft.a

C_OBJ = ft_isdigit.c ft_isprint.c ft_isalnum.c ft_isalpha.c ft_isascii.c  \
		ft_tolower.c ft_toupper.c ft_atoi.c ft_strncmp.c ft_strlen.c \
		ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strnstr.c \
		ft_bzero.c ft_calloc.c ft_strdup.c ft_memcpy.c ft_memccpy.c \
		ft_memmove.c ft_memchr.c ft_memcmp.c ft_memset.c \
		ft_substr.c ft_strjoin.c ft_split.c ft_strtrim.c ft_itoa.c \
		ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
		ft_putnbr_fd.c

O_OBJ = ft_isdigit.o ft_isprint.o ft_isalnum.o ft_isalpha.o ft_isascii.o \
		ft_tolower.o ft_toupper.o ft_atoi.o ft_strncmp.o ft_strlen.o \
		ft_strlcpy.o ft_strlcat.o ft_strchr.o ft_strrchr.o ft_strnstr.o \
		ft_bzero.o ft_calloc.o ft_strdup.o ft_memcpy.o ft_memccpy.o \
		ft_memmove.o ft_memchr.o ft_memcmp.o ft_memset.o \
		ft_substr.o ft_strjoin.o ft_split.o ft_strtrim.o ft_itoa.o \
		ft_strmapi.o ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o \
		ft_putnbr_fd.o


CC = gcc -g -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	$(CC) $(C_OBJ) -c
	ar rc $(NAME) $(O_OBJ)

clean:
	rm -rf $(O_OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
