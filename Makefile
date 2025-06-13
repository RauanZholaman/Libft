CFLAGS = -Wall -Wextra -Werror
СС = cc

SRC = ft_atoi.c ft_isdigit.c \
      ft_isalpha.c ft_isalnum.c \
      ft_isascii.c ft_isprint.c \
      ft_strlcpy.c ft_strlen.c \
      ft_strlcat.c ft_memset.c \
      ft_bzero.c ft_memcpy.c \
      ft_memmove.c ft_memchr.c \
      ft_memcmp.c

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
	@echo "Cleaning all object files including the program"
	rm -f $(NAME)

re: fclean all
	@echo "Rebuilding the program"
