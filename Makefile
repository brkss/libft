# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bberkass <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/23 16:15:28 by bberkass          #+#    #+#              #
#    Updated: 2021/11/09 12:40:27 by bberkass         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=libft.a

CC			= gcc

FLAGS		= -Wall -Wextra -Werror

SRCS		= $(wildcard ft_*.c)

OBJS		= ${SRCS:.c=.o}

HEADERS		= .

all: 		${NAME}

${NAME}:	${OBJS}
			ar rc ${NAME} ${OBJS}

.c.o:
			${CC} ${FLAGS} -c $< -o ${<:.c=.o} -I ${HEADERS} 
clean:
			rm -f ${OBJS}

fclean: 	clean
			rm -f ${NAME}

re: 		fclean all

.PHONY: 	all re clean fclean 
