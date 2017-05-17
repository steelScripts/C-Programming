#include "stdio.h"

int intsBetween(int, int);
int div5or6(int, int);

int main(void) 
{ 
	int low, high; 
	printf("Enter the low number: ");
	scanf("%d", &low);
	printf("\nEnter the high number: ");
	scanf("%d", &high);
	
	printf("\n\nIntegers between: %d", intsBetween(low, high));
	printf("Integers divisible by 5 or 6 but not both: %d", div5or6(low, high));
    return 0;
} 

int div5or6(l, h) {
	int i, counter = 0;
	for(i = l; i < h; i++) {
		if((i % 5 == 0 || i % 6 == 0) && !(i % 5 == 0 && i % 6 == 0)) {
			counter++;
		}
	}
	return counter; 
}

int intsBetween(l, h) {
	int i, counter = 0;
	for(i = l; i < h; i++) {
		counter++;
	}
	return counter;
}
