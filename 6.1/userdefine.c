#include <stdio.h>

int main() {
    int start, end;
    printf("Enter the start value : =   ");
	scanf("%d",&start);
	
	printf("Enter the end value : =   ");
	scanf("%d",&end);
	
	while(start >= end) {
        printf("%d ", start);
        start--;
    }

    return 0;
}
