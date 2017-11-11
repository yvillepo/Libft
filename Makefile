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

SRC = libc/memory/ft_bzero.c libc/memory/ft_memccpy.c libc/memory/ft_memchr.c \
	  libc/memory/ft_memcmp.c libc/memory/ft_memcpy.c libc/memory/ft_memmove.c \
	  libc/memory/ft_memset.c \
	  part2/ft_mem/ft_memalloc.c part2/ft_mem/ft_memdel.c \
	  libc/ft_is/ft_isalnum.c libc/ft_is/ft_isalpha.c libc/ft_is/ft_isascii.c \
	  libc/ft_is/ft_isdigit.c libc/ft_is/ft_isprint.c \
	  libc/ft_str/ft_strcat.c libc/ft_str/ft_strchr.c libc/ft_str/ft_strcmp.c \
	  libc/ft_str/ft_strcpy.c libc/ft_str/ft_strdup.c libc/ft_str/ft_strlcat.c \
	  libc/ft_str/ft_strlen.c libc/ft_str/ft_strncat.c libc/ft_str/ft_strncmp.c \
	  libc/ft_str/ft_strncpy.c libc/ft_str/ft_strnstr.c libc/ft_str/ft_strrchr.c \
	  libc/ft_str/ft_strstr.c \
	  libc/ft_to/ft_tolower.c libc/ft_to/ft_toupper.c \
	  libc/ft_atoi.c \

OBJ = *.o 

FLAG = -Wall -Wextra -Werror

DIRI = .

all : $(NAME)

$(NAME):
	@mkdir -p OBJ
	gcc $(FLAG) -c $(SRC) -I $(DIRI)
	ar rc $(NAME) $(OBJ)
	mv $(OBJ) OBJ

clean:
	rm -rf OBJ

fclean: clean
	rm -rf $(NAME)

re: fclean all
