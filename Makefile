# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yvillepo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/09 16:07:25 by yvillepo          #+#    #+#              #
#    Updated: 2017/11/13 15:24:39 by yvillepo         ###   ########.fr        #
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
	  part2/put/ft_putchar.c part2/put/ft_putchar_fd.c part2/put/ft_putendl.c\
	  part2/put/ft_putendl_fd.c part2/put/ft_putnbr.c part2/put/ft_putnbr_fd.c \
	  part2/put/ft_putstr.c part2/put/ft_putstr_fd.c\
	  part2/ft_itoa.c \
	  libc/to/ft_tolower.c libc/to/ft_toupper.c \
	  libc/ft_atoi.c \
	  bonus/ft_lstnew.c bonus/ft_lstadd.c bonus/ft_lstdelone.c \
	  bonus/ft_lstiter.c bonus/ft_lstmap.c bonus/ft_lstdel.c\
	  bonus/ft_lstadd_next.c \
	  plus/ft_rev.c plus/ft_swap_c.c plus/ft_abs.c\

OBJ = ft_abs.o ft_atoi.o ft_bzero.o ft_isalnum.o ft_isalpha.o ft_isascii.o \
	  ft_isdigit.o ft_isprint.o ft_itoa.o ft_lstadd.o ft_lstadd_next.o \
	  ft_lstdel.o ft_lstdelone.o ft_lstiter.o ft_lstmap.o ft_lstnew.o \
	  ft_memalloc.o ft_memccpy.o ft_memchr.o ft_memcmp.o ft_memcpy.o \
	  ft_memdel.o ft_memmove.o ft_memset.o ft_putchar.o ft_putchar_fd.o \
	  ft_putendl.o ft_putendl_fd.o ft_putnbr.o ft_putnbr_fd.o ft_putstr.o \
	  ft_putstr_fd.o ft_rev.o ft_strcat.o ft_strchr.o ft_strclr.o ft_strcmp.o\
	  ft_strcpy.o ft_strdel.o ft_strdup.o ft_strequ.o ft_striter.o \
	  ft_striteri.o ft_strjoin.o ft_strlcat.o ft_strlen.o ft_strmap.o \
	  ft_strmapi.o ft_strncat.o ft_strncmp.o ft_strncpy.o ft_strnequ.o \
	  ft_strnew.o ft_strnstr.o ft_strrchr.o ft_strsplit.o ft_strstr.o \
	  ft_strsub.o ft_strtrim.o ft_swap_c.o ft_tolower.o ft_toupper.o

FLAG = -Wall -Wextra -Werror

DIRI = .

all : $(NAME)

$(NAME): 
	gcc $(FLAG) -c $(SRC) -I $(DIRI)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
