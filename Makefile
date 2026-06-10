# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/25 15:06:21 by gviniciu          #+#    #+#              #
#    Updated: 2026/06/10 00:38:04 by gabriel          ###   ########.fr        #
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
			ft_strnstr.c ft_calloc.c ft_substr.c \
			ft_strjoin.c ft_strtrim.c ft_split.c \
			ft_itoa.c ft_strmapi.c ft_striteri.c \
			ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
			ft_putnbr_fd.c ft_lstnew.c ft_lstadd_front.c \
			ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
			ft_lstdelone.c ft_lstiter.c ft_lstmap.c


# Object files
OBJS = $(SRCS:.c=.o)
 
# Main Rule
all: $(NAME)

# Creating Library
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# Compiling .c files to .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean .o files
.PHONY: all clean fclean re

clean:
	rm -f $(OBJS) *.gch

fclean: clean
	rm -f $(NAME)

re: fclean all
 
