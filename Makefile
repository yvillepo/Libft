# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yvillepo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/09 16:07:25 by yvillepo          #+#    #+#              #
#    Updated: 2017/11/10 17:55:15 by yvillepo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = memory/ft_bzero.c memory/ft_memccpy.c memory/ft_memchr.c \
	  memory/ft_memcmp.c memory/ft_memcpy.c memory/ft_memmove.c \
	  memory/ft_memset.c \
	  memory/ft_memalloc.c memory/ft_memdel.c\
	  ft_is/ft_isalnum.c ft_is/ft_isalpha.c ft_is/ft_isascii.c \
	  ft_is/ft_isdigit.c ft_is/ft_isprint.c \
	  ft_str/ft_strcat.c ft_str/ft_strchr.c ft_str/ft_strcmp.c \
	  ft_str/ft_strcpy.c ft_str/ft_strdup.c ft_str/ft_strlcat.c \
	  ft_str/ft_strlen.c ft_str/ft_strncat.c ft_str/ft_strncmp.c \
	  ft_str/ft_strncpy.c ft_str/ft_strnstr.c ft_str/ft_strrchr.c \
	  ft_str/ft_strstr.c \
	  ft_to/ft_tolower.c ft_to/ft_toupper.c \
	  ft_atoi.c \

OBJ = *.o 

FLAG = -Wall -Wextra -Werror

DIRI = .

all : $(NAME)

$(NAME): fclean
	gcc $(FLAG) -c $(SRC) -I $(DIRI)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
