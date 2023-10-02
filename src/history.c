#include <history.h>

List* init_history()
{
  List *list = (list *)malloc(sizeof(List));
  list->root = (Item *) malloc(sizeof(Item));
}

void add_history(List *list, char *str)
{
  int newItemId = 1;
  Item *tempRoot = list->root;

  while (tempRoot != NULL) {
    tempRoot = tempRoot->next;
    newItemId++;
  }

  // We are at the end of the list now
  tempRoot->str = (Item *)malloc(sizeof(Item));
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
  Item 
}

void free_history(List *list)
{
}



