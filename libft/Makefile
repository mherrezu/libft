# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mherrezu <mherrezu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/30 17:51:43 by mherrezu          #+#    #+#              #
#    Updated: 2022/10/01 11:33:50 by mherrezu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c

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