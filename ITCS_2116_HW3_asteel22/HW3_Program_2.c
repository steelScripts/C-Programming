#include "stdio.h"

int findHigh(int[]);
int findLow(int[]);
int main(void) 
{ 
	int highs[10], i, temp;
	printf("You will be asked to enter the daily high tempratures for 10 days");
	for(i = 0; i < 10; i++){
		printf("Enter a high temprature for day %d: ", i);
		scanf("%d", &temp);
		highs[i] = temp;
	}
	
	printf("Highest temprature: %d", findHigh(highs));
    return 0;
} 

int findHigh(int arr[]){
	int i, temp = 0, high = 0;
	for(i = 0; i < 10; i++) {
		temp = arr[i];
		if(temp > high)
			high = temp;
	}
	return high;
}
