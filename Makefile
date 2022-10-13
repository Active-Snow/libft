CC=cc
NAME=libft.a
CFLAGS=-Wall -Wextra -Werror
OPTIONS=-c -I.
SRC= ft_mem*.c ft_str*.c ft_is*.c ft_bzero
OBJ=*.o
BONUS= ft_lst*.c

all: $(NAME)

$(NAME): $(OBJ)
	ar -CRS $(NAME) $(OBJ)

$(OBJ): $(SRC)
	$(CC) $(CFLAGS) $(OPTIONS) $(SRC)

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(NAME)

re: fclean all

BONUS: $(BONUS)
	$(CC) $(CFLAGS) $(OPTIONS) $(BONUS)
	ar -crs $(NAME) $(OBJ)

