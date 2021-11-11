# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bberkass <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/23 16:15:28 by bberkass          #+#    #+#              #
#    Updated: 2021/11/11 23:17:47 by bberkass         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=libft.a

CC			= cc

FLAGS		= -Wall -Wextra -Werror

SRCS		= 	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
				ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
				ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c \
				ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c \
				ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c \
				ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c 

BSRCS		= 	ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c \
					ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c

OBJS		= ${SRCS:.c=.o}

BOBJ		= ${BSRCS:.c=.o}

HEADERS		= .


all: 		${NAME} 

${NAME}:	${OBJS}


%.o: %.c
			${CC} ${FLAGS} -c $< -o ${<:.c=.o} -I ${HEADERS} 
			ar rcs ${NAME} ${<:.c=.o}

bonus:		${BOBJ}

clean:
			rm -f ${OBJS} ${BOBJ}

fclean: 	clean
			rm -f ${NAME}

re: 		fclean all

.PHONY: 	all re clean fclean 
