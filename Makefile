CFLAGS = -Wall -Wextra -Werror
СС = gcc

SRC = ft_atoi.c ft_isdigit.c
OBJ = $(SRC:c=.o)

libft.a: ft_atoi.o 
	$(CC) -o libft libft.o

libft.o: ft_atoi.c libft.h
	$(CC) -c ft_atoi.c

clean:
	rm -f *.o libft

	



