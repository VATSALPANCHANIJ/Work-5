#include<stdio.h>

int main() {
    int sizeA, sizeB,i;

    // A
    printf("Enter array A's size: ");
    scanf("%d", &sizeA);

    int A[sizeA];
    printf("Enter array A's elements:\n");
    for ( i = 0; i < sizeA; ++i) {
        printf("a[%d] = ", i);
        scanf("%d", &A[i]);
    }

    //  B
    printf("Enter array B's size: ");
    scanf("%d", &sizeB);

    int B[sizeB];
    printf("Enter array B's elements:\n");
    for ( i = 0; i < sizeB; ++i) {
        printf("b[%d] = ", i);
        scanf("%d", &B[i]);
    }

    // Merge
    int sizeC = sizeA + sizeB;
    int C[sizeC];

    for ( i = 0; i < sizeA; ++i) {
        C[i] = A[i];
    }

    for ( i = 0; i < sizeB; ++i) {
        C[sizeA + i] = B[i];
    }

    // C
    printf("Array C is: ");
    for ( i = 0; i < sizeC; ++i) {
        printf("%d", C[i]);
        if (i < sizeC - 1) {
            printf(", ");
        }
    }

}

