
NAME		= libft.a

SRCS 		= $(wildcard ft_*.c) 

OBJS		= $(SRCS:.c=.o)

HEADERS		= .

all: 		$(NAME)

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS) 

.c.o:
			$(CC) $(FLAGS) -c $< -o $(<:.c=.o) -I $(HEADERS)


clean:
			rm -f $(OBJS) 

fclean: 	clean
			rm -f $(NAME)

re: 		fclean all

.PHONY: 	all re clean fclea 
