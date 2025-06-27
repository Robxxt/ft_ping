NAME = ft_ping
CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRCS =	srcs/main.c
OBJS = $(SRCS:.c=.o)
LIBFT_LIB = libft/libft.a

all: $(NAME)

$(NAME): $(OBJS)
	make -C libft
	$(CC) $(CFLAGS) $^ $(LIBFT_LIB) -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	make -C libft clean
	rm -f $(OBJS)

fclean: clean
	make -C libft fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re