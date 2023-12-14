#include <stdio.h>

int main() {
    int i, j; // You can change this value to adjust the number of rows

    for ( i = 0; i < 5; i++) {
        char a = 'A' + i;
        for ( j = i; j >= 0; j--) {
            printf("%c ", a - j);
        }
        printf("\n");
    }

    return 0;
}

