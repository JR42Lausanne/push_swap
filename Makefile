# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlaiti <jlaiti@student.42lausanne.ch>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/24 14:49:17 by jlaiti            #+#    #+#              #
#    Updated: 2023/01/18 18:02:48 by jlaiti           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	main.c					\
		init_process.c			\
		check_input_process.c	\
		parse_input.c			\
		create_stack.c			\
		check_sort.c			\
		big_sort.c				\
		ra.c					\
		pa.c					\
		pb.c					\
		print_stack.c           \


NAME = push_swap
LIB  = libft.a

OBJS_SRCS = $(SRCS:.c=.o)

CFLAGS = -Wall -Wextra -Werror
CDEBUGFLAGS = -D DEBUG=1 -fsanitize=address -g

CC = gcc

all: $(NAME)

$(LIB):
	cd libft/ && make && cp -v libft.a ../

%.o : %.c
	$(CC) $(CFLAGS) -o $@ -c $<

$(NAME) : $(LIB) $(OBJS_SRCS)
	$(CC) $(CFLAGS) -L. -lft -o $(NAME) $(OBJS_SRCS)

debug : $(LIB) $(OBJS_SRCS)
	$(CC) $(CDEBUGFLAGS) -L. -lft -o $(NAME) $(OBJS_SRCS)

clean:
	rm -rf $(OBJS_SRCS)
	${MAKE} clean -C libft

fclean: clean
	rm -rf $(NAME) $(LIB)
	${MAKE} fclean -C libft

re: fclean all

.PHONY : all clean fclean re
