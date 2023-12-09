#include <stdio.h>

int main() {
    int start, end;
	printf("Enter the first year : =   ");
	scanf("%d",&start);
    
    printf("Enter the second year : =   ");
	scanf("%d",&end);
	
	while(start <= end) {
		if(start % 4 == 0){
		printf("%d ", start);	
		}
        start++;
    }

    return 0;
}
