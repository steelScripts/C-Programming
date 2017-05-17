#include "stdio.h"
#include "string.h"
#include "ctype.h"
#include "stdlib.h"

int runAgain = 1;

void process(char command[]){
  //Read Command
  int i, spaceCtr = 0;
  char *op, *num1, *num2;
  for(i = 0; i < strlen(command); i++) {
    if(!isspace(command[i]) && isalpha(command[i]) && i <= 4){
      *op++ = command[i];
    }
    else if(isspace(command[i])){
      spaceCtr++;
    }
    else if(!isspace(command[i]) && isdigit(command[i]) && spaceCtr == 1){
      *num1++ = command[i];
    }
    else if(!isspace(command[i]) && isdigit(command[i]) && spaceCtr == 2){
      *num2++ = command[i];
    }
  }
  
  //Process Command
  for(i = 0; i < strlen(op); i++) {
    if(isalpha(op[i])){
      op[i] = toupper(op[i]);
    }
  }
  
  int total;
  int newNum1 = atoi(num1);
  int newNum2 = atoi(num2);
  
  if (strcmp(*op, "ADD") == 0) 
      total = newNum1 + newNum2;
      
  else if (strcmp(*op, "SUB") == 0) 
      total = newNum1 - newNum2;
      
  else if (strcmp(*op, "MULT") == 0) 
      total = newNum1 * newNum2;
      
  else if (strcmp(*op, "DIV") == 0) 
      total = newNum1 / newNum2;
      
  else if (strcmp(*op, "QUIT") == 0)  
      runAgain = 0;
      
  else
      printf("Invalid Response, Try Again.");
  
  printf("Total: %d", total);
}


int main(void) {
    // Disable stdout buffering
    setvbuf(stdout, NULL, _IONBF, 0);
    
    printf("Enter commands format \"COMMAND X Y\" where x and y and numbers.");
    printf("\nCommand Options:\n\t");
    printf("ADD\n\t");
    printf("SUB\n\t");
    printf("MULT\n\t");
    printf("DIV\n\t");
    printf("QUIT (to terminate program)\n\n");
    
    while(runAgain){
      char command[20];
      printf("Enter command: ");
      scanf("%s", &command);
      process(command);
      
    }
    printf("Done!");
    
    
    return 0;
}