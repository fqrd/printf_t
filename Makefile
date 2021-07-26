SRC = ../ft_printf/
CFLAGS = -Wall -Werror -Wextra
CC = gcc

all: 
	$(CC) $(CFLAGS) main.c $(SRC)*.c && ./a.out
l: 
	$(CC) $(CFLAGS) main.c $(SRC)*.c && valgrind -q -s --leak-check=yes ./a.out
m: 
	$(CC) $(CFLAGS) -fsanitize=address main.c $(SRC)*.c && ./a.out