SRC = ../
CFLAGS = -Wall -Werror -Wextra
CC = gcc

all: 
	$(CC) $(CFLAGS) main.c $(SRC)*.c && ./a.out
