# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mwilbur <mwilbur@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/09 14:54:28 by mwilbur           #+#    #+#              #
#    Updated: 2019/09/19 20:43:45 by mwilbur          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
SRCS=ft_atoi.c \
		ft_bzero.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_islower.c \
		ft_isprint.c \
		ft_isupper.c \
		ft_itoa.c \
		ft_lstadd.c \
		ft_lstdel.c \
		ft_lstdelone.c \
		ft_lstiter.c \
		ft_lstmap.c \
		ft_lstnew.c \
		ft_memalloc.c \
		ft_memccpy.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memdel.c \
		ft_memmove.c \
		ft_memset.c \
		ft_putchar.c \
		ft_putchar_fd.c \
		ft_putendl.c \
		ft_putendl_fd.c \
		ft_putnbr.c \
		ft_putnbr_fd.c \
		ft_putstr.c \
		ft_putstr_fd.c \
		ft_strcat.c \
		ft_strchr.c \
		ft_strclr.c \
		ft_strcmp.c \
		ft_strcpy.c \
		ft_strdel.c \
		ft_strdup.c \
		ft_strequ.c \
		ft_striter.c \
		ft_striteri.c \
		ft_strjoin.c \
		ft_strlcat.c \
		ft_strlen.c \
		ft_strmap.c \
		ft_strmapi.c \
		ft_strncat.c \
		ft_strncmp.c \
		ft_strncpy.c \
		ft_strnequ.c \
		ft_strnew.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strstr.c \
		ft_strsub.c  \
		ft_strtrim.c \
		ft_wordscounter.c \
		ft_strsplit.c \
		ft_tolower.c \
		ft_toupper.c

OBJECTS=ft_atoi.o \
		ft_bzero.o \
		ft_isalnum.o \
		ft_isalpha.o \
		ft_isascii.o \
		ft_isdigit.o \
		ft_islower.o \
		ft_isprint.o \
		ft_isupper.o \
		ft_itoa.o \
		ft_lstadd.o \
		ft_lstdel.o \
		ft_lstdelone.o \
		ft_lstiter.o \
		ft_lstmap.o \
		ft_lstnew.o \
		ft_memalloc.o \
		ft_memccpy.o \
		ft_memchr.o \
		ft_memcmp.o \
		ft_memcpy.o \
		ft_memdel.o \
		ft_memmove.o \
		ft_memset.o \
		ft_putchar.o \
		ft_putchar_fd.o \
		ft_putendl.o \
		ft_putendl_fd.o \
		ft_putnbr.o \
		ft_putnbr_fd.o \
		ft_putstr.o \
		ft_putstr_fd.o \
		ft_strcat.o \
		ft_strchr.o \
		ft_strclr.o \
		ft_strcmp.o \
		ft_strcpy.o \
		ft_strdel.o \
		ft_strdup.o \
		ft_strequ.o \
		ft_striter.o \
		ft_striteri.o \
		ft_strjoin.o \
		ft_strlcat.o \
		ft_strlen.o \
		ft_strmap.o \
		ft_strmapi.o \
		ft_strncat.o \
		ft_strncmp.o \
		ft_strncpy.o \
		ft_strnequ.o \
		ft_strnew.o \
		ft_strnstr.o \
		ft_strrchr.o \
		ft_strstr.o \
		ft_strsub.o \
		ft_strtrim.o \
		ft_wordscounter.o \
		ft_strsplit.o \
		ft_tolower.o \
		ft_toupper.o

HEADER=libft.h
FLAGS=-Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRCS) $(HEADER)
		gcc -I $(HEADER) -c $(FLAGS) $(SRCS)
		ar rc $(NAME) $(OBJECTS)
		ranlib $(NAME)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
