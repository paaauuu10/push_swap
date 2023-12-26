CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = main.c push_swap.c ft_error.c handle_errors.c ini_stack.c libft.c push.c reverse_rotate.c rotate.c sort_five.c sort_three.c split.c stack_utils.c swap.c info_nodes.c 
# Lista de archivos fuente
OBJ = $(SRC:.c=.o)
EXECUTABLE = push_swap

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(EXECUTABLE)

re: fclean all

.PHONY: all clean fclean re
