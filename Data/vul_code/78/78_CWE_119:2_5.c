#include <stdio.h>
#include <errno.h>
#include <string.h>

int main(void)
{
    char reference[50], query[50]; // declare character arrays with sufficient size

    printf("\n Enter reference genome file name:  ");
    scanf("%s", reference); // read the reference genome file name from the user

    printf("\n Enter query sequence file name:  ");
    scanf("%s", query); // read the query sequence file name from the user

    // Rest of your code goes here...

    return 0;
}