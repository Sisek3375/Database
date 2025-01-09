CC = gcc
CFLAGS = -Wall
SRC = main.c repl.c btree.c
OBJ = $(SRC:.c=.o)
EXEC = Database

$(EXEC): $(OBJ)
	$(CC) $(OBJ) -o $(EXEC)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(EXEC)
