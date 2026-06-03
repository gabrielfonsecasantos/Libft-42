# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/25 15:06:21 by gviniciu          #+#    #+#              #
#    Updated: 2026/06/03 15:30:52 by gabriel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a

CC := cc

CFLAGS := -Wall -Wextra -Werror

SRCS := ft_isalpha.c ft_isdigit.c ft_isalnum.c \
			ft_isascii.c ft_strlen.c ft_isprint.c \
			ft_memset.c ft_bzero.c ft_memcpy.c \
			ft_memmove.c ft_strlcpy.c ft_strlcat.c \
			ft_toupper.c ft_tolower.c ft_strchr.c \
			ft_atoi.c ft_memcmp.c ft_memchr.c \
			ft_strncmp.c ft_strdup.c ft_strrchr.c \
			ft_strnstr.c ft_calloc.c


# Object files
OBJS = $(SRCS:.c=.o)
 
# Main Rule
all: $(NAME)

# Creating Library
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# Compiling .c files to .o
%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

# Clean .o files
.PHONY = all clean fclean re

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: flclean all
 
