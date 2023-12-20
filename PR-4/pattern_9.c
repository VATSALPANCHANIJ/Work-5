#include <stdio.h>

int main (){
	
	int i, j;
	
	for(i=1; i<=5; i++){
		for(j=1; j<=4; j++){
			if(i==1|| i==3)
			printf("* ");
			else if(j==1|| j==5){
				printf("*     *");
			}
		}
		printf("\n");
	}
}

