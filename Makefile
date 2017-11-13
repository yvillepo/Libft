# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yvillepo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/09 16:07:25 by yvillepo          #+#    #+#              #
#    Updated: 2017/11/13 19:41:29 by yvillepo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC =ft_abs.c ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
	 ft_isdigit.c ft_isprint.c ft_itoa.c ft_lstadd.c ft_lstadd_next.c \
	 ft_lstdel.c ft_lstdelone.c ft_lstiter.c ft_lstmap.c ft_lstnew.c \
	 ft_memalloc.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
	 ft_memdel.c ft_memmove.c ft_memset.c ft_putchar.c ft_putchar_fd.c \
	 ft_putendl.c ft_putendl_fd.c ft_putnbr.c ft_putnbr_fd.c ft_putstr.c \
	 ft_putstr_fd.c ft_rev.c ft_strcat.c ft_strchr.c ft_strclr.c ft_strcmp.c\
	 ft_strcpy.c ft_strdel.c ft_strdup.c ft_strequ.c ft_striter.c \
	 ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlen.c ft_strmap.c \
	 ft_strmapi.c ft_strncat.c ft_strncmp.c ft_strncpy.c ft_strnequ.c \
	 ft_strnew.c ft_strnstr.c ft_strrchr.c ft_strsplit.c ft_strstr.c \
	 ft_strsub.c ft_strtrim.c ft_swap_c.c ft_tolower.c ft_toupper.c

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
