CFLAGS = -Wall -Wextra -Werror
СС = gcc

SRC = ft_atoi.c ft_isdigit.c
OBJ = $(SRC:.c=.o) 

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJ)
	@echo "Linking all object files into one executable" 
	$(CC) $(OBJ) -o $(NAME)

%.o: %.c
	@echo "Compiling source files into objects"
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "Cleaning up all object files"
	rm -f *.o libft

fclean: clean
	rm -f $(NAME)

re: fclean all
