# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlaiti <jlaiti@student.42lausanne.ch>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/06 10:58:13 by jlaiti            #+#    #+#              #
#    Updated: 2023/01/06 11:27:18 by jlaiti           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =  push_swap.c

NAME = push_swap

LIB  = libft.a

OBJS_SRCS = $(SRCS:.c=.o)
 
CFLAGS = -Wall -Wextra -Werror

CC = gcc

all: $(NAME)
 
$(LIB):
	cd libft/ && make && cp -v libft.a ../

$(NAME) : $(LIB) $(OBJS_SRCS)
	$(CC) -L. -lft -o $(NAME) $(OBJS_SRCS)

%.o : %.c
         $(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -rf $(OBJS_SRCS)
	${MAKE} -C libft clean

fclean: clean
	rm -rf $(NAME) $(LIB)

re: fclean all
 
.PHONY : all clean fclean re
