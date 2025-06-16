CFLAGS = -Wall -Wextra -Werror
СС = cc

SRC = ft_atoi.c ft_isdigit.c \
      ft_isalpha.c ft_isalnum.c \
      ft_isascii.c ft_isprint.c \
      ft_strlcpy.c ft_strlen.c \
      ft_strlcat.c ft_memset.c \
      ft_bzero.c ft_memcpy.c \
      ft_memmove.c ft_memchr.c \
      ft_memcmp.c ft_calloc.c \
      ft_strdup.c ft_substr.c \
      ft_strchr.c ft_strnstr.c \
      ft_tolower.c ft_toupper.c \
      ft_strrchr.c ft_strncmp.c \
      ft_strjoin.c ft_strtrim.c \
      ft_split.c  ft_itoa.c     \

OBJ = $(SRC:.c=.o) 

NAME = libft.a

HEADER = libft.h

all: $(NAME)

my_program: $(OBJ)
	@echo "Linking all object files into one executable" 
	$(CC) $(OBJ) -o my_program

$(NAME): $(OBJ) $(HEADER)
	ar rcs $(NAME) $(OBJ) 

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
