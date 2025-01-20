#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "repl.h"

// function REPL for manage the user interface
void repl() {
    char *input = NULL;  // Buffer for the user input
    size_t len = 0;      // Buffer length

    // Create a dynamic table
    char **table = NULL;
    size_t table_size = 0;
    size_t table_capacity = 2;

    // Allocate memory for the table
    table = (char**)malloc(table_capacity * sizeof(char*));
    if (!table) {
        printf("Error for memory allocation\n");
        return;
    }

    while (1) {
        printf("sql> ");
        ssize_t read = getline(&input, &len, stdin);
        if (read == -1) {
            printf("\nSee you !\n");
            break;
        }

        // Delete the '\n' at the end for the getline
        if (input[read - 1] == '\n') {
            input[read - 1] = '\0';
        }

        if (strncmp(input, "INSERT ", 7) == 0) {
            // Catch the value after "INSERT "
            char *value = input + 7;

            // if the table is full, expend capacity
            if (table_size == table_capacity) {
                table_capacity *= 2;
                table = (char**)realloc(table, table_capacity * sizeof(char*));
                if (!table) {
                    printf("Error for memory reallocation\n");
                    return;
                }
            }

            // Add the new value to the table
            table[table_size] = strdup(value);
            table_size++;

            printf("Value '%s' inserted.\n", value);
        } else if (strcmp(input, "SELECT") == 0) {
            // Display all the values of the table
            if (table_size == 0) {
                printf("No values to display.\n");
            } else {
                printf("Table :\n");
                for (size_t i = 0; i < table_size; i++) {
                    printf("%s\n", table[i]);
                }
            }
        } else if (strcmp(input, "EXIT") == 0) {
            printf("See you !\n");
            break;
        } else {
            printf("Invalid command. Try : INSERT, SELECT, ou EXIT.\n");
        }
    }

    // free the allocated memory for the table and the user input
    for (size_t i = 0; i < table_size; i++) {
        free(table[i]);
    }
    free(table);
    free(input);
}

