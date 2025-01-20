CC = gcc
CFLAGS = -Wall -Wextra -g
OBJ = main.o repl.o
TARGET = Database

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

main.o: main.c repl.h
	$(CC) $(CFLAGS) -c main.c

repl.o: repl.c repl.h
	$(CC) $(CFLAGS) -c repl.c

clean:
	rm -f $(OBJ) $(TARGET)

