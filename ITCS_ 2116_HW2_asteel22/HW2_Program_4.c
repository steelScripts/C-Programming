#include "stdio.h"

int main(void) {
    // Disable stdout buffering
    setvbuf(stdout, NULL, _IONBF, 0);

	int income, dependants;
	float taxRate, taxDue;
    printf("Please enter your income: ");
    scanf("%d", &income);
    
    if(income > 190150) {
    	taxRate = .33;
    }
    else if(income > 91150) {
    	taxRate = .28;
    }
    else if(income > 37650) {
    	taxRate = .25;
    }
    else if(income > 9275) {
    	taxRate = .15;
    }
    else {
    	taxRate = .10;
    }
    
    printf("\nTax Due: %.2f", income * taxRate);
    printf("\nPlease enter number of dependants: ");
    scanf("%d", &dependants);
    int taxCredit = dependants * 500;
    printf("\nTax Credit: %d", taxCredit);
    
   
    
    return 0;
}