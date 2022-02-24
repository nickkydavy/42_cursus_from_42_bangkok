# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pnimwata <pnimwata@student.42bangkok.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/16 18:55:54 by pnimwata          #+#    #+#              #
#    Updated: 2022/02/24 14:50:56 by pnimwata         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
#FILE = ./$(NAME).a
SRC_FILE := ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
			ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
			ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
			ft_strrchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c \
			ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
			ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
			ft_putendl_fd.c ft_putnbr_fd.c ft_strncmp.c
OBJECT_FILE := $(SRC_FILE:.c=.o)

all: $(NAME)

$(NAME):
	@clear
	@echo "compile all ft_*.c file to ft_.*o"
	@gcc -Wall -Werror -Wextra -c $(SRC_FILE)
	@echo "Done!"
	@echo "Convert all ft_*.o to Archive file libft.a"
	@ar rcs $(NAME) $(OBJECT_FILE)
	@echo "Done"

clean:
	@echo "Remove .o files"
	rm -rf $(OBJECT_FILE)
	@echo "Done!"

fclean: clean
	@echo "Remove .o & .a files"
	rm -rf $(NAME)
	@echo "Done"

re: fclean all

#.PHONY: $(NAME) all clean fclean re
