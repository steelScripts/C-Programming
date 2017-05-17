#include "stdio.h"
#include "stdlib.h"

int main(void) {
    // Disable stdout buffering
    setvbuf(stdout, NULL, _IONBF, 0);

 	int totalAmount;
 	
    printf("Enter dollar amount: $");
    scanf("%d", &totalAmount);
    
    int num20 = 0,
    	num10 = 0, 
    	num5 = 0, 
    	num1 = 0;
    
    while(totalAmount / 20 >= 1) {
    	num20++;
	 	totalAmount -= 20;
    }
    
    while(totalAmount / 10 >= 1) {
    	num10++;
	 	totalAmount -= 10;
    }
    
    while(totalAmount / 5 >= 1) {
    	num5++;
	 	totalAmount -= 5;
    }
    
    while(totalAmount / 1 >= 1) {
    	num1++;
	 	totalAmount -= 1;
    }
    
    printf("You need: ");
    printf("\n\tNumber of 20's: %d", num20);
    printf("\n\tNumber of 10's: %d", num10);
    printf("\n\tNumber of 5's: %d", num5);
    printf("\n\tNumber of 1's: %d", num1);
	
	return 0;
}