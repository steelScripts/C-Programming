#include "stdio.h"
#include "string.h"
#include "ctype.h"

char* capitalize(char string[]) {
  int i;
  char *str = string;
  for(i = 0; i < strlen(string); i++) {
    if(isalpha(string[i])){
      *str++ = toupper(string[i]);
    }
  }
  
  return string;
}

int main(void) {
    // Disable stdout buffering
    setvbuf(stdout, NULL, _IONBF, 0);
    
    int runAgain = 1;
    
    while(runAgain){
      char response[40];
      printf("Enter string to capitalize: ");
      scanf("%s", &response);
      
      char *c = capitalize(response);
      printf("\nResult: %s", c);
      
      printf("\nRun again? 1 for yes 0 for no ");
      scanf("%d", &runAgain);
      
    }
    printf("Goodbye");
    
    
    return 0;
}