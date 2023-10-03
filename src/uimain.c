#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"
#include "history.h"

int main() {
  List *history =  init_history();
  
  printf("-------------------------------------------------------------------------\n");
  printf("\t\t\t\tWELCOME TO TOKENIZER!!\n");
  printf("-------------------------------------------------------------------------\n\n");

  while(1) {
    printf("Hello! please pick one of the following options:\n");
    printf("1. Input 'i' to input a sentence to tokenize\n");
    printf("2. Input 'h' to view all histories\n");
    printf("3. Input '!' followed by the number to recall a certain history item\n");
    printf("4. Input 'q' to quit\n\n");
    printf(">");

    char user_selection[10];
    fgets(user_selection, 10, stdin);
    
    switch(user_selection[0]) {
      case 'i':
        printf("Please enter a sentence(limit is 100 characters):\n>");
        char sentence [100];
	fgets(sentence, 100, stdin);
	printf("Your sentence was: %s", sentence);
	char **tokens = tokenize(sentence);
	print_tokens(tokens);
	add_history(history, sentence);
        break;
      case 'h':
	print_history(history);
        break;
      case '!':
	int historyItem = atoi(user_selection+1);
        printf("You've decide to recall history item %d\n", historyItem);
	printf("%s", get_history(history, historyItem));
        break;
      case 'q':
        printf("Goodbye!\n\n");
        return 0;
      default:
	printf("Invalid option. Try again");
	break;
    }
    printf("\n\n");
  }
}
