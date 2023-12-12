#include <stdio.h>
 // Printing even numbers from 1 to N using do-while loop
int main() {
    int n;

    printf("Enter any number: ");
    scanf("%d", &n);

   
    int i = 1;
    do {
        if (i % 2 == 0) {
            printf("%d \n ", i);
        }
        i++;
    } while (i <= n);

    return 0;
}
