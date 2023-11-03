NAME = libft.a
SO_NAME = libft.so
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c
OBJS = $(SRCS:.c=.o)
INCLUDES=./
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I$(INCLUDES)
all: $(NAME)
$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS)
			ranlib $(NAME)
so: $(OBJS)
	$(CC) -nostartfiles -shared -o $(SO_NAME) $(OBJS)
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
clean:
			rm -f $(OBJS)
fclean:		clean
			rm -f $(NAME) $(SO_NAME)
re:		fclean all

