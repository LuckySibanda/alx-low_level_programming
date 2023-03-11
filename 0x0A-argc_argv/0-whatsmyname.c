
#include <stdio.h>
#include <string.h>

/**
 * main - prints the name of the program
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[]) {
    // Get the program name from the command line arguments
    char *program_name = argv[0];
    
    // Find the last occurrence of '/' in the program name
    char *last_slash = strrchr(program_name, '/');
    
    // If there's a slash, the program name is everything after it
    if (last_slash != NULL) {
        program_name = last_slash + 1;
    }
    
    // Print the program name, followed by a new line
    printf("%s\n", program_name);
    
    return 0;
}

