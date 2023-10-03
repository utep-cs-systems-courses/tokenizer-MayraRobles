#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"
#include "history.h"

int main() {
  printf("---------------------------------------------------\n");
  printf("               WELCOME TO TOKENIZER!!\n");
  printf("---------------------------------------------------\n\n");

  while(1) {
    printf("Hello! please pick one of the following options:\n");
    printf("1. Input 'i' to input a sentence to tokenize\n");
    printf("2. Input '!' followed by the number to recall a certain history item\n");
    printf("3. Input 'q' to quit\n");
    printf(">");

    char user_selection[10];
    fgets(user_selection, 10, stdin);
    
    switch(user_selection[0]) {
      case 'i':
        printf("Please enter a sentence(limit is 100 characters):\n>");
        char sentence [100];
	fgets(sentence, 100, stdin);
	printf("%s", *sentence);
        break;
      case '!':
        printf("You've decided to see history");
        break;
      case 'q':
        printf("Goodbye!");
        return 0;
      default:
	printf("Invalid option. Try again");
	break;
    }
    
  }
  
}
