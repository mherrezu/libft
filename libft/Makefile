# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mherrezu <mherrezu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/30 17:51:43 by mherrezu          #+#    #+#              #
#    Updated: 2022/10/02 14:08:47 by mherrezu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c \
		ft_bzero.c ft_memset.c ft_memcpy.c ft_atoi.c

OBJS = $(SRCS:.c=.o)

CC = gcc

CFLAGS = -Wall -Werror -Wextra

RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS)
			$(CC) -c $(CFLAGS) $(SRCS)
			ar crs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean: 	clean
						$(RM) $(NAME)

re:			fclean all

.PHONY: all, clean, fclean, re