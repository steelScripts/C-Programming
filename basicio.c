/*
@author Andrew Steele asteel22@uncc.edu
@file Basic I/O
@date 08/30/2016
@purpose This program demonstrates how to read and write a character of input from standard input (the console).
*/
#include "stdio.h"

int main(void) {
    // Disable stdout buffering
    setvbuf(stdout, NULL, _IONBF, 0);
	
	int a, b, c;
	
	printf("Insert values for characters a, b, and c (no spaces):\n");
	scanf("%c%c%c", &a, &b, &c);
	
	printf("Char C: %c\nChar B: %c\nChar A: %c\n", c, b, a);
	
	
	int d, e, f;
	printf("Insert values for characters d, e, and f (no spaces):\n");
	d = getchar();
	e = getchar();
	f = getchar();
	
	(void) putchar(f);
	(void) putchar(e);
	(void) putchar(d);
	
	
    return 0;
}