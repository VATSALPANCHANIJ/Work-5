#include<stdio.h>
main()
// 1 2 3 4 5 5 4 3 2 1
// 1 2 3 4     4 3 2 1
// 1 2 3         3 2 1
// 1 2             2 1
// 1                 1

// 1 2             2 1
// 1 2 3         3 2 1
// 1 2 3 4     4 3 2 1
// 1 2 3 4 5 5 4 3 2 1

{
	
	int i, k, j;
	
	for (i = 5; i >= 1; i--) {
	    	
        for (j = 1; j <= i; j++) {
            printf("  %d ", j);
        }
        for (k = 2 * (5 - i); k > 0; k--) {
            printf("    ");
        }
        for (j = i; j >= 1; j--) {
           
                printf("  %d ", j);
            
        }
        printf("\n");
    }
    // buttom
     for (i = 2; i <= 5; i++) {
	    	
        for (j = 1; j <= i; j++) {
            printf("  %d ", j);
        }
        for (k = 2 * (5 - i); k > 0; k--) {
            printf("    ");
        }
        for (j = i; j >= 1; j--) {
           
                printf("  %d ", j);
            
        }
        printf("\n");
    }
}
