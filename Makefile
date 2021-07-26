SRC = ../
CFLAGS = -Wall -Werror -Wextra
CC = gcc

all: 
	$(CC) $(CFLAGS) main.c $(SRC)*.c && ./a.out
<<<<<<< HEAD
l: 
	$(CC) $(CFLAGS) main.c $(SRC)*.c && valgrind -q -s --leak-check=yes ./a.out
m: 
	$(CC) $(CFLAGS) -fsanitize=address main.c $(SRC)*.c && ./a.out
=======
>>>>>>> 3d3ffc9f1ae3520075f7d75109e02e9482220219
