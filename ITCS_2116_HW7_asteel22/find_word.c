#include "stdio.h"
#include "string.h"
#include "ctype.h"
#include "stdlib.h"

int find_word(char *list[], int num, char search[]){
	int i, found = 0;
	for(i = 0; i < num; i++) {
		if(strcmp(list[i], search) == 0){
			found++;
		}
	}
	return found;
};

int main(){
	char * word_list[5] = {"Dog", "Zebra", "Cat", "Aadrvark", "Horse"};
	char * search_list[4] = {"Cat", "Lion", "Shark", "Dog"};

	 int i;

	 for (i = 0; i < 4; i++) {
		 if (find_word(word_list, 5, search_list[i]))
			printf("%s is on the list\n", search_list[i]);
		 else
			printf("%s is NOT on the list\n", search_list[i]);
	 }
	 
	 return 0;
}

