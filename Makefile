# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: paminna <paminna@stud.21-school.ru>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/20 12:14:49 by paminna           #+#    #+#              #
#    Updated: 2020/10/31 10:26:41 by paminna          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_memset.c ft_memcpy.c ft_memchr.c

OBJS = ${SRCS:.c=.o}

NAME = Libft

AR = ar rc

RUN = ranlib

CC = gcc

RM = rm -rf

CFLAGS = -Wall -Wextra -Werror

.c.o:
			 	${CC} ${CFLAGS} -c $<

${NAME}:		${OBJS}
				cc -o ${NAME} ${OBJS}

all:${NAME}

clean:
				${RM} ${OBJS}

fclean:			clean
				${RM} ${NAME}

re:				fclean all

.PHONY: all clean fclean re