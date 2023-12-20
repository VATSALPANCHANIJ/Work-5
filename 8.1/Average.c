#include <stdio.h>

int main() {
    int n;

    printf("Enter array size: ");
    scanf("%d", &n);

    int a[n],i;

    printf("Enter array elements:\n");
    for( i = 0; i < n; i++) {
        printf("  a=[%d]",i);
        scanf("%d", &a[i]);
    }

    int sum = 0;
    for( i = 0; i <= n; i++) {
        sum += a[i];
    }

    double average = (double)sum / n;

    printf("Average of an Array: %.2lf\n", average);

    return 0;
}
