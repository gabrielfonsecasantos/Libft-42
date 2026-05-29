# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gviniciu <gviniciu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/25 15:06:21 by gviniciu          #+#    #+#              #
#    Updated: 2026/05/28 15:37:34 by gviniciu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := main

CC := cc

CFLAGS := -Wall -Wextra -Werror -lbsd

IFLAGS := -I.. -L.. -lft

SRCS := main.c

# Object files
# OBJS = $(SRCS:.c=.o)
 
# Main Rule
all: $(NAME)

# Creating Library
$(NAME): $(SRCS)
	@$(MAKE) -C ..
	@$(MAKE) -C ..
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME) $(IFLAGS)

# Compiling .c files to .o
# %.o: %.c
# 	$(CC) $(FLAGS) $(IFLAGS) -c $< -o $@

# Clean .o files
.PHONY = all clean fclean re

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	@$(MAKE) fclean -C ..

re: flclean all
 
