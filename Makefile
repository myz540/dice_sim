CC = gcc
CFLAGS = -g -Wall

main: dice.o
	$(CC) $(CFLAGS) -o main dice.o
