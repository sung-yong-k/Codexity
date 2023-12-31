#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    FILE *fp;
    int line = 1, col = 1;
    char ch;

    // prompt user for filename
    char filename[100];
    printf("Enter filename: ");
    scanf("%s", filename);

    // open the file
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("File not found!\n");
        return 1;
    }

    // read and print the contents of the file
    printf("Contents of the file:\n");
    while ((ch = fgetc(fp)) != EOF) {
        printf("%c", ch);
        if (ch == '\n') {
            line++;
            col = 1;
        } else {
            col++;
        }
    }

    // close the file
    fclose(fp);

    // display the number of lines and columns in the file
    printf("\nTotal lines: %d\n", line);
    printf("Total columns: %d\n", col);

    return 0;
}