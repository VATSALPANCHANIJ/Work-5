#include <stdio.h>

int main() {
    int n,i;

    printf("Enter array size: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter array elements:\n");
    for( i = 0; i < n; i++) {
    	printf("  a=[%d]",i);
        scanf("%d", &a[i]);
    }

    int length = sizeof(a) / sizeof(a[0]);

    printf("Length of an Array: %d\n", length);

    return 0;
}
