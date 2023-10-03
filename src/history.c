#include <stdio.h>
#include <stdlib.h>
#include "history.h"
#include "tokenizer.h"

List* init_history()
{
  List *list = malloc(sizeof(List));
  list->root = malloc(sizeof(Item));

  return list;
}

void add_history(List *list, char *str)
{
  int newItemId = 1;
  Item *tempRoot = list->root;
  
  while (tempRoot->next != NULL) {
    tempRoot = tempRoot->next;
    newItemId++;
  }

  // We are at the end of the list now
  tempRoot->next = malloc(sizeof(Item));
  tempRoot->str = str;
  tempRoot->id = newItemId;
}

char *get_history(List *list, int id)
{
  Item *tempRoot = list->root;
  while(tempRoot != NULL) {
    if(id == tempRoot->id) {
      return tempRoot->str;
    }
    tempRoot = tempRoot->next;
  }
  return NULL;
}

void print_history(List *list)
{
  Item *tempRoot = list->root;
  if (tempRoot->next == NULL) {
    printf("There is no history!");
  }
  else {
    printf("Here is the history:\n");
    while (tempRoot != NULL) {
    printf("id: %d, token: %s\n", tempRoot->id, tempRoot->str);
    tempRoot = tempRoot->next;
    }
  }
}

void free_history(List *list)
{
  Item *cur = list->root;
  while (cur != NULL) {
    Item *prev =  cur;
    free(cur->str);
    cur = prev->next;
    free(prev);
  }
  free(list);
}



