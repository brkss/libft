# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bberkass <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/23 16:15:28 by bberkass          #+#    #+#              #
#    Updated: 2021/11/09 21:12:58 by bberkass         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=libft.a

CC			= gcc

FLAGS		= -Wall -Wextra -Werror

SRCS		= $(wildcard ft_*.c)

BSRC		= $(wildcard ft_lst*.c)

OBJS		= ${SRCS:.c=.o}

BOBJ		= ${BSRC:.c=.o}

HEADERS		= .

all: 		${NAME}

${NAME}:	${OBJS}
			ar rc ${NAME} ${OBJS}

bonus:		${BOBJ}
			${CC} ${FLAGS} -c $< -o ${<:.c=.o} -I ${HEADERS}
			ar rc bonus.a ${BOBJ}

.c.o:
			${CC} ${FLAGS} -c $< -o ${<:.c=.o} -I ${HEADERS} 
clean:
			rm -f ${OBJS}

fclean: 	clean
			rm -f ${NAME}

re: 		fclean all

.PHONY: 	all re clean fclean 
