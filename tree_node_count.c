#include <stdio.h>
#include <stdlib.h>
#include "./tree/tree_init.c"

int main(void){

  Tree* tree = make_tree();
  Node* node = tree->root;
  printf("Tree root node value %d \n", node->value);
  printf("Tree first left value %d \n", node->left->value);
  printf("Tree first right value %d \n", node->right->value);
  


  return 1;
}