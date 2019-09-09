# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mwilbur <mwilbur@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/09 14:54:28 by mwilbur           #+#    #+#              #
#    Updated: 2019/09/09 15:20:57 by mwilbur          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
SRCS=*.c
OBJECTS=*.o
HEADER=libft.h
FLAGS=-Wall -Wextra -Werror

all:
	gcc -I $(HEADER) -c $(FLAGS) $(SRCS)
	ar rc $(NAME) $(OBJECTS)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
