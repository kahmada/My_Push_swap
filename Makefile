# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kahmada <kahmada@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/21 18:30:32 by kahmada           #+#    #+#              #
#    Updated: 2024/04/22 15:09:13 by kahmada          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME   = push_swap
HEADER = push_swap.h
CC     = cc
CFLAGS = -Wall -Werror -Wextra
RM     = rm -f

SRC = libftfunc.c \
	  ft_atoi.c \
      ft_split.c \
	  parcing.c \
	  free_errors.c \
      push_swap.c \
      fonction_utilise.c \
      initialise_stack.c\
	  operation_my_a.c\
	  operation_my_b.c\
	  sort_3_4_5.c\
	  sort_stacks.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean
	$(MAKE) all
