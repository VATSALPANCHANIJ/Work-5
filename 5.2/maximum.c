#include <stdio.h>

int main() {
    int a, b, c, d, max;

    printf("Enter a value of the first number: ");
    scanf("%d", &a);

    printf("Enter a value of the second number: ");
    scanf("%d", &b);

    printf("Enter a value of the third number: ");
    scanf("%d", &c);

    printf("Enter a value of the fourth number: ");
    scanf("%d", &d);

    if(a >= b && a >= c && a >= d) {
        max = a;
    } else if(b >= a && b >= c && b >= d) {
        max = b;
    } else if(c >= a && c >= b && c >= d) {
        max = c;
    } else {
        max = d;
    }

    printf("The maximum value is: %d\n", max);

    return 0;
}
