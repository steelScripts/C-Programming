#include "stdio.h"

int main(void) {
    // Disable stdout buffering
    setvbuf(stdout, NULL, _IONBF, 0);
    int areaCode = 229;
    
    switch(areaCode){
      case 229: printf("Albany");
          break;
      case 404: printf("Atlanta");
          break;  
      case 470: printf("Atlanta");
          break;
      case 478: printf("Macon");
          break;
      case 678: printf("Atlanta");
          break;
      case 706: printf("Columbus");
          break;
      case 762: printf("Columbus");
          break;
      case 770: printf("Atlanta");
          break;
      case 912: printf("Savannah");
          break;
      default: printf("Invalid area code");
          
    }
    return 0;
}