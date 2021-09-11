#include <stdio.h>

#include "list.h"

int main() {
  printf("Tests for linked list implementation\n");

  list_t* list = list_alloc();
  // add to front tests
  list_add_to_front(list, 10);
  list_add_to_front(list, 9);
  list_add_to_front(list, 8);
  list_add_to_front(list, 7);
  // list should be 7->8->9->10->NULL;
  list_print(list);
  
  // add to back tests
  list_add_to_back(list, 13);
  list_add_to_back(list, 14);
  list_add_to_back(list, 15);
  list_add_to_back(list, 16);
  // list should be 7->8->9->10->13->14->15->16->NULL;
  list_print(list);
  
  // add at index
  list_add_at_index(list, 11, 4);
  list_add_at_index(list, 12, 5);
  list_add_at_index(list, 12, 50);
  list_add_at_index(list, 12, -1);

  // list should be 7->8->9->10->11->12->13->14->15->16->NULL;
  list_print(list);
  
  // remove from back
  printf("%d\n", list_remove_from_back(list));
  printf("%d\n", list_remove_from_back(list));
  
  // list should be 7->8->9->10->11->12->13->14->NULL;
  list_print(list);
  
  // remove from front
  printf("%d\n", list_remove_from_front(list));
  printf("%d\n", list_remove_from_front(list));
  
  // list should be 9->10->11->12->13->14->NULL;
  list_print(list);
  
  // remove from index
  printf("%d\n", list_remove_at_index(list, 2));
  printf("%d\n", list_remove_at_index(list, 2));
  
  // list should be 9->10->13->14->NULL;
  list_print(list);
  
  // is in list
  printf("%s\n", list_is_in(list, 9) ? "true" : "false");
  printf("%s\n", list_is_in(list, 10) ? "true" : "false");
  printf("%s\n", list_is_in(list, 11) ? "true" : "false");
  printf("%s\n", list_is_in(list, 12) ? "true" : "false");
  
  // list should be 9->10->13->14->NULL;
  list_print(list);
  
  // get at index
  printf("%d\n", list_get_elem_at(list, 0));
  printf("%d\n", list_get_elem_at(list, 1) );
  printf("%d\n", list_get_elem_at(list, 2));
  printf("%d\n", list_get_elem_at(list, -100));
  printf("%d\n", list_get_elem_at(list, 10));
  
  // list should be 9->10->13->14->NULL;
  list_print(list);
  
  // get at index
  printf("%d\n", list_get_index_of(list, 9));
  printf("%d\n", list_get_index_of(list, 10) );
  printf("%d\n", list_get_index_of(list, 11));
  printf("%d\n", list_get_index_of(list, 12));
  printf("%d\n", list_get_index_of(list, 13));
  
  // list should be 9->10->13->14->NULL;
  list_print(list);
  
  return 0;
}
