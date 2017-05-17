#include "stdio.h"
#include "string.h"
#include "ctype.h"

//Function converts all alphabetic character to their uppercase equivalent
//Also converts dashes to spaces
char* capitalize(char string[]) {
  int i;
  for(i = 0; i < strlen(string); i++) {
    if(string[i] != NULL && isalpha(string[i])){
      string[i] = toupper(string[i]);
    }
    else if(string[i] == '-'){
      string[i] = ' ';
    }
  }
  
  return string;
}

/*
  This application reads a string (max 40 characters) and converts all the letters to uppercase
  it reads dashes(-) as spaces.
*/
int main(void) {
    // Disable stdout buffering
    setvbuf(stdout, NULL, _IONBF, 0);
    
    int runAgain = 1;
    
    while(runAgain){
      char response[40];
      printf("Enter string to capitalize (no spaces): ");
      scanf("%s", &response);
      
      char *c = capitalize(response);
      printf("\nResult: %s", c);
      
      printf("\nRun again? 1 for yes 0 for no ");
      scanf("%d", &runAgain);
      
    }
    printf("Goodbye");
    
    
    return 0;
}