#include <stdio.h>

int findHigh(int[]);
int findLow(int[]);

int sorted[10];

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
	int i, temp;
	for(i = 1; i < 10; i++) {
		int j = i;
		while(arr[j-1] > arr[j] && j > 0){
			temp = arr[j-1];
			arr[j-1] = arr[j];
			arr[j] = temp;
			j--;
		}
	}
	for(i = 0; i < 10; i++){
		sorted[i] = arr[i];
	}
	return arr[10];
}


