# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pnimwata <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/15 12:17:35 by pnimwata          #+#    #+#              #
#    Updated: 2022/02/15 12:17:35 by pnimwata         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft
FILE = ./$(NAME).a
SRC_FILE := ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
			ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
			ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
			ft_strrchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c \
			ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
			ft_itoa.c ft_strmapi.c ft_striteri.c ft_purchar_fd.c ft_putstr_fd.c \
			ft_putendl_fd.c ft_putnbr_fd.c
OBJECT_FILE := $(SRC_FILE:.c=.o)

all: $(NAME) 

$(NAME):
	gcc -Wall -Werror -Wextra -c $(SRC_FILE)
	ar rcs $(FILE) $(OBJECT_FILE)
	gcc main.c -L. -lft -o $(NAME)

clean:
	rm -rf $(OBJECT_FILE)

fclean: clean
	rm -rf $(NAME) $(FILE)

re: fclean all