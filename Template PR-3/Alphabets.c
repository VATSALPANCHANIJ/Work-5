#include<stdio.h>

int main() {
    char ch='A';

    printf("Output: \n");
    do {
        printf("     %c \n", ch);
        ch += 4; 
    } while (ch <= 'Z');

    return 0;
}
