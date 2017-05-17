#include "stdlib.h"

#define PI 3.14159265359

int main(void) {
    // Disable stdout buffering
    setvbuf(stdout, NULL, _IONBF, 0);
    
    float radius;
    printf("Please enter circle radius: ");
    scanf("%f", &radius);
    float volume = (4/3)*PI*(radius*radius*radius);
    printf("Volume: %.5f", volume);
	
	return 0;
}