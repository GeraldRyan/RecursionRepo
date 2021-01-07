#include <stdio.h>
#include <stdlib.h>
#include "./tree/tree_init.c"

int count_children(Node *node, int tally)
{
  if (node == NULL)
  {
    return 0 + tally;
  } // BASE CASE

  else if (node->left == NULL && node->right == NULL)
  {
    return 0 + tally;
  }
  else if (node->left == NULL && node->right != NULL)
  {
    count_children(node->right, tally);
    return 1 + tally;
  }
  else if (node->right == NULL && node->left != NULL)
  {
    count_children(node->left, tally);
    return 1 + tally;
  }
  else
  {
    int left = count_children(node->left, tally);
    int right = count_children(node->right, tally);
    return 2 + tally + left + right;
  }
}

int main(void)
{
  Tree *tree = make_tree();
  Node *node = tree->root;
  int node_count = 0;
  printf("Tree root node value %d \n", node->value);
  printf("Tree first left value %d \n", node->left->value);
  printf("Tree first right value %d \n", node->right->value);
  node_count = count_children(node, 1);
  printf("Node count is %d\n", node_count);

  return 1;
}