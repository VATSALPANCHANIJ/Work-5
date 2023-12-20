#include <stdio.h>

int main() 
//        1
//      1 2 1
//    1 2 3 2 1
//  1 2 3 4 3 2 1
//1 2 3 4 5 4 3 2 1
{
    int i, j, k;

    

    for (i = 1; i <= 5; i++) {
      
        for (k = i; k < 5; k++)
            printf("  ");
            
        for (j = 1; j <= i; j++)
            printf("* ");

    
        for (j = i - 1; j >= 1; j--)
            printf("* ");

        printf("\n");
    }

    return 0;
}

