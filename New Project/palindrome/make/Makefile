
CC=gcc

SRC=../src/
BIN=../bin/
OBJ=../obj/
INCLUDE=../include/

OFLAGS=-o

CFLAGS=-g -c

IFLAGS=-I

$(BIN)palindrome:$(OBJ)palindrome.o

	$(CC) $(OFLAGS) palindrome $(OBJ)palindrome.o
	
	mv palindrome $(BIN)


$(OBJ)palindrome.o:$(SRC)palindrome.c

	$(CC) $(CFLAGS) $(IFLAGS)$(INCLUDE) $(SRC)palindrome.c 

	mv palindrome.o $(OBJ)

clean:
	rm $(BIN)palindrome $(OBJ)*.o
