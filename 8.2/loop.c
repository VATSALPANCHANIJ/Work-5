#include<stdio.h>

int main() {
    int firstYear, secondYear,year,i;


    printf("Enter the first number: ");
    scanf("%d", &firstYear);

    printf("Enter the second number: ");
    scanf("%d", &secondYear);

    
    int leapYears[1000];
    int count = 0;

    for (year = firstYear; year <= secondYear; year++) {
        if (year % 4 == 0){
            leapYears[count] = year;
            count++;
        }
    }

    // Output the array of leap years
    printf("The array is: ");
    for ( i = 0; i < count; i++) {
        printf("%d", leapYears[i]);
        if (i < count - 1) {
            printf(", ");
        }
    }
  printf("\nTotal number of leap years = %d\n", count);
    return 0;
}

