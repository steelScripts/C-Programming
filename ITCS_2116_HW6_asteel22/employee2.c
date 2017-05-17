#include "stdio.h"
#include "string.h"
#include "ctype.h"
#include "stdlib.h"

struct node {
  struct employee e;
  int index;
  struct node *next;
};
struct employee{
    char name[39],
         streetAddress[49],
         city[29],
         state[4],
         zip[5];
    
      float salary;
}

void insertEmployee(struct )

void readRecord(struct employee e) {
  printf("Name: %s\n", e.name);
  printf("Address: %s\n", e.streetAddress);
  printf("City: %s\n", e.city);
  printf("State: %s\n", e.state);
  printf("Zip: %s\n", e.zip);
  printf("Salary: %f", e.salary);
}

int main(void) {
    // Disable stdout buffering
    
    struct employee employees[10];
    char response[130];
    
    
    int running = 1;
    while(running){
      char response[130];
      char command[10];
      char record[120];
      int i, spaceCounter = 0;
      //Command List
      printf("Enter Command\n");
      printf("\tLIST - Shows list of employees\n");
      printf("\tINSERT - Adds new employee\n");
      printf("\tDELETE - Deletes employee entry\n");
      printf("\tEDIT - Edits an existing entry\n");
      printf("\tCALCPAYROLL - Calculates and displays the total payroll\n");
      printf("\tHELP - Displays the set of available commands\n");
      printf("\tQUIT - Exits the program\n");
      scanf("%s", &response);
      for(i = 0; i < response.length; i++) {
        if(!isspace(response[i])) {
          *command++ = response[i];
        }
        else if(spaceCounter >= 1) {
          *record++ = repsonse[i];
        }
        else {
          spaceCounter++;
          break;
        }
        
      };
      
      
      
      //Creates uppercase response
      command = toupper(command);
      
      //Terminates the Loop
      if(command == "QUIT") {
        printf("Goodbye!");
        running--;
      }
      
      //Prints out all the command options again
      else if(command == "HELP"){
        printf("\tLIST - Shows list of employees\n");
        printf("\tINSERT - Adds new employee\n");
        printf("\tDELETE - Deletes employee entry\n");
        printf("\tEDIT - Edits an existing entry\n");
        printf("\tCALCPAYROLL - Calculates and displays the total payroll\n");
        printf("\tHELP - Displays the set of available commands\n");
        printf("\tQUIT - Exits the program\n");
      }
      
      //Totals the combined salaries of all employees
      else if(command == "CALCPAYROLL") {
        int i;
        float total = 0;
        for(i = 0; i < employees.length; i++) {
          total += employees[i].salary;
          
        }
        printf("Total: %.2f", total);
      }
      
      //Edits field of existing entry
      else if(response == "EDIT") {
        int index;
        printf("Which employee do you wish to edit? (enter index)");
        scanf("%d", index);
        employee e1 = employee[index];
        readRecord(employees[index]);
        
        char field[15];
        printf("Which field do you wish to edit?");
        scanf("%s", field);
        
        field = toupper(field);
        
        
        if(field == "NAME") {
          char newName[39];
          printf("New Name: ");
          scanf("%s", name);
          e1.name = newName; 
          employees[index] = e1;
        }
        else if(field == "STREETADDRESS") {
          char newStreetAddress[49];
          printf("New Street Address: ");
          scanf("%s", newStreetAddress);
          e1.streetAddress = newStreetAddress; 
          employees[index] = e1;
        }
        else if(field == "CITY"){
          char newCity[49];
          printf("New City: ");
          scanf("%s", newCity);
          e1.city = newCity; 
          employees[index] = e1;
        }
        else if(field == "ZIP"){
          char newZip[5];
          printf("New Zip Code: ");
          scanf("%s", zip);
          e1.zip = zip; 
          employees[index] = e1;
        }
        else if(field == "SALARY"){
          float newSalary;
          printf("New Salary: ");
          scanf("%.2f", newSalary);
          e1.salary = newSalary;
          employees[index] = e1;
        }
      }
      
      else if(response == "INSERT") {
        
        int i = 0, 
            nameLen = 0,
            addrLen = 0,
            salaryLen = 0;
            
        //Loop to calculate name length
        while(record[i] != ' '){
          nameLen++;
          i++;
        }
        //Array to hold name
        char tempName[nameLen];
        
        //Loop to assign name to new array
        for(i = 0; i < nameLen; i++){
          tempName[i] = record[i];
        }
        
        
        printf("Name: %s/n", tempName);
        
        
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
      {
        
      
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