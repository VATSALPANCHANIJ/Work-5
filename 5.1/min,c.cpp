#include <stdio.h>

int main() {
    int num1, num2, min;

    printf("Enter a value of the first number: ");
    scanf("%d", &num1);

    printf("Enter a value of the second number: ");
    scanf("%d", &num2);

    if(num1 < num2) {
        min = num1;
    } else {
        min = num2;
    }

    printf("The minimum value is: %d\n", min);

    return 0;
}
