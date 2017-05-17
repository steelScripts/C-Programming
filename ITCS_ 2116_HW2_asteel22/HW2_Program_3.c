#include "stdio.h"
#include "stdlib.h"

int main(void) {
    // Disable stdout buffering
    setvbuf(stdout, NULL, _IONBF, 0);

	int areaCode, first3, last4;
 	printf("Please enter phone number in format in (XXX)XXX-XXXX:\n");
 	scanf("(%d)%d-%d", &areaCode, &first3, &last4);
 	
 	printf("\nYou entered: %d.%d.%d", areaCode, first3, last4);
 	
 	if(areaCode > 999 || areaCode < 100 ||
 		first3 > 999 || first3 < 100 ||
 		last4 > 999 || last4 < 100) {
 			printf("\nInvalid data and/or format");
 			return 0;
 		}
 	
 	if(areaCode == 704 || areaCode == 980) {
 		printf("\nThis phone number is a Charlotte number.");
 	}
 	else {
 		printf("\nThis phone number is NOT a Charlotte number.");
 	}
 	
	return 0;
}