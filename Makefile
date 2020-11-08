# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: paminna <paminna@stud.21-school.ru>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/20 12:14:49 by paminna           #+#    #+#              #
#    Updated: 2020/11/06 22:10:24 by paminna          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_memset.c ft_bzero.c ft_memcpy.c ft_memchr.c ft_memccpy.c ft_memmove.c ft_memchr.c \
ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c  ft_strrchr.c ft_strnstr.c ft_strncmp.c \
ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_strchr.c\
ft_calloc.c ft_strdup.c

OBJS = ${SRCS:.c=.o}

NAME = libft.a

AR = ar rc

RUN = ranlib

CC = gcc

RM = rm -rf

CFLAGS = -Wall -Wextra -Werror

.c.o:
			 	${CC} ${CFLAGS} -c $< 

$(NAME):		${OBJS}
				${AR} ${NAME} ${OBJS}
				${RUN} ${NAME} 

all:${NAME}

clean:
				${RM} ${OBJS}

fclean:			clean
				${RM} ${NAME}

re:				fclean all

.PHONY: all clean fclean re