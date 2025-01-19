#include <stdio.h>
#include <stdlib.h>
#include "repl.c"
#include <stdbool.h>
#include <string.h>

// Top of the program
int main(){
        printf(“Welcome to the SQL mini-terminal!”);
        printf(“Available commands :\n”);
        printf(“- INSERT value: Adds a value to the table”);
        printf(“ - SELECT : displays table values”);
        printf(“ - EXIT : exits the program”);
     
        // Start the REPL loop
        repl();
  return 0;
  
}

