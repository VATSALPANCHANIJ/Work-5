#include <stdio.h>

int main() 
//1                 1
//1 2             2 1
//1 2 3         3 2 1
//1 2 3 4     4 3 2 1
//1 2 3 4 5 5 4 3 2 1
{
    int i, j, k;

    for (i = 1; i <= 5; i++) {

        // Print the left side in ascending order
        for (j = 1; j <= i; j++)
            printf("%d  ", j);

        // Print spaces for formatting
        for (k = 2 * (5 - i); k >= 1; k--)
            printf("   ");

        // Print the right side in descending order
        for (j = i; j > 1; j--)
            printf("%d  ", j - 1);

        printf("\n");
    }
}

 
