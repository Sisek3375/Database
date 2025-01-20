#include <stdio.h>
#include <stdlib.h>
#include "repl.h"

int main() {
    printf("Welcome to the mini SQL terminal!\n");
    printf("Available commands:\n");
    printf("- INSERT <value>: Adds a value to the table\n");
    printf("- SELECT: Displays the values\n");
    printf("- EXIT: Exits the program\n");

    repl();

    return 0;
}

