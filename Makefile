# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: paminna <paminna@stud.21-school.ru>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/20 12:14:49 by paminna           #+#    #+#              #
#    Updated: 2020/11/18 19:52:26 by paminna          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_memset.c ft_bzero.c ft_memcpy.c ft_memchr.c ft_memccpy.c ft_memmove.c ft_memchr.c \
ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c  ft_strrchr.c ft_strnstr.c ft_strncmp.c \
ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_strchr.c\
ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_strmapi.c ft_putchar_fd.c ft_itoa.c ft_putstr_fd.c\
ft_putendl_fd.c ft_putnbr_fd.c ft_split.c

BONUS = ft_lstnew.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstadd_front.c ft_lstdelone.c ft_lstclear.c\
ft_lstiter.c ft_lstmap.c

OBJS = ${SRCS:.c=.o}

BONUS_OBJS = ${BONUS:.c=.o}

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

all: ${NAME}

bonus: 		$(BONUS_OBJS)
			${AR} ${NAME} ${BONUS_OBJS}
			${RUN} ${NAME} 

clean:
				${RM} ${OBJS}
				${RM} ${BONUS_OBJS}

fclean:			clean
				${RM} ${NAME}

re:				fclean all

.PHONY: all clean fclean re bonus