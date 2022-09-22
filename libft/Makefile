# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mherrezu <mherrezu@student.42malaga.c      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/22 18:32:17 by mherrezu          #+#    #+#              #
#    Updated: 2022/09/22 19:03:16 by mherrezu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS	= isalpha.c	isdigit.c	isalnum.c	isascii.c isprint.c	strlen.c	memset.c	bzero.c	memcpy.c	memmove.c	strlcpy.c strlcat	toupper.c	tolower.c	strchr.c

OBJ	=	${SRCS:.c=.o}

CC	=	gcc

CFLAGS	=	-Wall -Wextra -Werror

RM	=	rm	-f

all: ${NAME}

${NAME}: ${OBJS}
			${CC} -c ${CFLAGS} ${SRCS}
			ar crs ${NAME} {OBJS}

clean:
				$
