# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yvillepo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/09 16:07:25 by yvillepo          #+#    #+#              #
#    Updated: 2017/11/09 16:29:05 by yvillepo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = *.c ft_is/*.c ft_str/*.c ft_to/*.c memory/*.c 

OBJ = *.o */*.o

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
