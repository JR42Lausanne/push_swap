# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlaiti <jlaiti@student.42lausanne.ch>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/24 14:49:17 by jlaiti            #+#    #+#              #
#    Updated: 2023/01/04 15:55:33 by jlaiti           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	main.c					\
		init_process.c			\
		check_input_process2.c	

NAME = push_swap
LIB  = libft.a

OBJS_SRCS = $(SRCS:.c=.o)

CFLAGS = -Wall -Wextra -Werror -fsanitize=address -g3

CC = gcc

all: $(NAME)

$(LIB):
	cd libft/ && make && cp -v libft.a ../

%.o : %.c
	$(CC) $(CFLAGS) -o $@ -c $<

$(NAME) : $(LIB) $(OBJS_SRCS)
	$(CC) $(CFLAGS) -L. -lft -o $(NAME) $(OBJS_SRCS)

clean:
	rm -rf $(OBJS_SRCS)
	${MAKE} clean -C libft

fclean: clean
	rm -rf $(NAME) $(LIB)
	${MAKE} fclean -C libft

re: fclean all

.PHONY : all clean fclean re
