#include<stdio.h>
main()
{
	int n, Factorial=1;
	
	printf("Enter the any number :");
	scanf("%d",&n);
	int ans = n;
	fact:
		if(n > 0){
			
			Factorial = Factorial*n;
			n--;
			goto fact;
		}
		printf("Your Factorial %d = %d", ans, Factorial);
		
}
