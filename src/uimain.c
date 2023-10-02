// This is a file for the UI of the program
#include <stdio.h>
#include <stdlib.h>
#include <tokenizer.h>
#include <history.h>

int main() {
  printf("---------------------------------------------------\n");
  prinft("               WELCOME TO TOKENIZER!!\n");
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
      printf("Please enter a sentence:\n>"); 
      break;
    case '!':
      printf("You've decided to see history
");
      break;
    case 'q':
      printf("Goodbye!");
      return 0;
    }
    
  }
  
}
