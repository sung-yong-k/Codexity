#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    int i, len;
    char *cstring;

    // Calculate the total length of the C string
    len = 0;
    for (i = 1; i < argc; i++) {
        len += strlen(argv[i]) + 1;  // Add 1 for space or null terminator
    }

    // Allocate memory for the C string
    cstring = (char*) malloc(len * sizeof(char));

    // Concatenate the command line arguments into the C string
    int index = 0;
    for (i = 1; i < argc; i++) {
        strcpy(cstring + index, argv[i]);  // Copy argument to C string
        index += strlen(argv[i]);  // Move index to the end of the argument
        cstring[index] = ' ';  // Add a space after each argument
        index++;  // Move index to the next position
    }
    cstring[index - 1] = '\0';  // Replace the last space with null terminator

    // Print the concatenated C string
    printf("Concatenated string: %s\n", cstring);

    // Free the allocated memory
    free(cstring);

    return 0;
}