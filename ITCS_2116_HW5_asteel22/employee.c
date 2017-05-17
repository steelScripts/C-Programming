#include "stdio.h"

int main(void) {
    // Disable stdout buffering
    
    int running = 1;
    
    while(running){
      char name[39],
         streetAddress[49],
         city[29],
         state[4],
         zip[5];
    
      float salary;
      
      char response[130];
      printf("Enter employee data ([:Q to exit, anything else to continue):\n");
      scanf("%s", &response);
      
      if(response == ":Q") {
        running = 0;
      }
      else{
        int i = 0, 
            nameLen = 0,
            addrLen = 0,
            salaryLen = 0;
        //Loop to calculate name length
        while(response[i] != ' '){
          nameLen++;
          i++;
        }
        //Array to hold name
        char name[nameLen];
        
        //Loop to assign name to new array
        for(i = 0; i < nameLen; i++){
          name[i] = response[i];
        }
        printf("Name: %s/n", name);
        
        
        //Loop to calculate address length
        i = nameLen + 2;
        while(response[i] != ' '){
          addrLen++;
          i++;
        }
        //Array to hold address
        char address[addrLen];
        
        //Loop to assign address to new array
        for(i = nameLen + 2; i < addrLen; i++){
          address[i] = response[i];
        }
        printf("Address: %s/n", address);
        
        //Function to dehyphenate address
        
        //Loop to calculate salary length
        i = nameLen + addrLen + 4;
        while(response[i] != ' '){
          salaryLen++;
          i++;
        }
        //Array to hold salary
        char salary[salaryLen];
        
        //Loop to assign salary to new array
        for(i = nameLen + addrLen + 4; i < salaryLen; i++){
          salary[i] = response[i];
        }
        printf("Salary: %s/n", salary);
        
        
        //
      }
      
      printf("New Employee Data\n----------\n");
      
      printf("\n\tName: %s", &name);
      printf("\n\tAddress: %s", &streetAddress);
      printf("\n\tCity: %s", &city);
      printf("\n\tState: %s", &state);
      printf("\n\tZip: %s", &zip);
      printf("\n\tSalary: %f", &salary);
      printf("----------\n");
      
    }
    printf("Goodbye!");
    
    return 0; 
}