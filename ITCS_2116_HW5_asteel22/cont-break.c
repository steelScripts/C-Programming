#include "stdio.h"

int main(void) {
    // Disable stdout buffering
    setvbuf(stdout, NULL, _IONBF, 0);
    int sum = 0, i; 
    //This for loop adds all numbers less than 5
    for (i=0; i<10; i++)
     {      
        if (i > 4)
           break; //stops the loop
        
        sum += i ;
     }
     sum = 0;
     //This for loop adds all whole numbers from 0 to 9
    for (i=0; i<10; i++)
     {
        if (i % 2)
           continue; //continues the loop uninterrupted
        
        sum += i ;
     }
    return 0;
}