# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yvillepo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/09 16:07:25 by yvillepo          #+#    #+#              #
#    Updated: 2017/11/11 21:27:56 by yvillepo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = libc/mem/ft_bzero.c libc/mem/ft_memccpy.c libc/mem/ft_memchr.c \
	  libc/mem/ft_memcmp.c libc/mem/ft_memcpy.c libc/mem/ft_memmove.c \
	  libc/mem/ft_memset.c \
	  part2/mem/ft_memalloc.c part2/mem/ft_memdel.c \
	  libc/is/ft_isalnum.c libc/is/ft_isalpha.c libc/is/ft_isascii.c \
	  libc/is/ft_isdigit.c libc/is/ft_isprint.c \
	  libc/str/ft_strcat.c libc/str/ft_strchr.c libc/str/ft_strcmp.c \
	  libc/str/ft_strcpy.c libc/str/ft_strdup.c libc/str/ft_strlcat.c \
	  libc/str/ft_strlen.c libc/str/ft_strncat.c libc/str/ft_strncmp.c \
	  libc/str/ft_strncpy.c libc/str/ft_strnstr.c libc/str/ft_strrchr.c \
	  libc/str/ft_strstr.c \
	  part2/str/ft_strclr.c part2/str/ft_strdel.c part2/str/ft_strequ.c \
	  part2/str/ft_striter.c part2/str/ft_striteri.c part2/str/ft_strmap.c \
	  part2/str/ft_strmapi.c part2/str/ft_strnequ.c part2/str/ft_strnew.c \
	  part2/str/ft_strsub.c  part2/str/ft_strjoin.c part2/str/ft_strsplit.c\
	  part2/str/ft_strtrim.c\
	  part2/put/ft_putchar.c part2/put/ft_putnbr.c part2/put/ft_putstr.c \
	  part2/ft_itoa.c \
	  plus/ft_rev.c plus/ft_swap_c.c plus/ft_abs.c\
	  libc/to/ft_tolower.c libc/to/ft_toupper.c \
	  libc/ft_atoi.c \

OBJ = *.o 

FLAG = -Wall -Wextra -Werror

DIRI = .

all : $(NAME)

$(NAME): fclean
	@mkdir -p OBJ
	gcc $(FLAG) -c $(SRC) -I $(DIRI)
	ar rc $(NAME) $(OBJ)
	mv $(OBJ) OBJ

clean:
	rm -rf OBJ

fclean: clean
	rm -rf $(NAME)

re: fclean all
