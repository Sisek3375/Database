CC = gcc
CFLAGS = -Wall -Wextra -g
OBJ = main.o repl.o btree.o
TARGET = mini_sql


all: $(TARGET)

$(TARGET): $(OBJ)
        $(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

main.o: main.c repl.h
        $(CC) $(CFLAGS) -c main.c

repl.o: repl.c repl.h btree.h
        $(CC) $(CFLAGS) -c repl.c

btree.o: btree.c btree.h
        $(CC) $(CFLAGS) -c btree.c

clean:
        rm -f $(OBJ) $(TARGET)

