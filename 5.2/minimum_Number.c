#include <stdio.h>

int main() {
    int a, b, c, min;

    printf("Enter a value of the first number: ");
    scanf("%d", &a);

    printf("Enter a value of the second number: ");
    scanf("%d", &b);

    printf("Enter a value of the third number: ");
    scanf("%d", &c);

    if(a <= b && a <= c) {
        min = a;
    } else if(b <= a && b <= c) {
        min = b;
    } else {
        min = c;
    }

    printf("The minimum number is: %d\n", min);

    return 0;
}
