#include <stdio.h>
#include <errno.h>
#include <string.h>

int main(void)
{
    char reference[50], query[50]; // declare character arrays with sufficient size

    printf("\n Enter reference genome file name:  ");
    scanf("%s", reference); // read the file name for reference genome

    printf("\n Enter query genome file name:  ");
    scanf("%s", query); // read the file name for query genome

    // Rest of the code...

    return 0;
}