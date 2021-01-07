#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
  int value;
  int curDepth;
  struct Node *left;
  struct Node *right;
} Node;

typedef struct Tree
{
  int numNodes;
  int numNodesLeft;
  int numNodesRight;
  int depth;
  int diameter;
  float lrRatio;
  Node *root;
} Tree;

Node *new_node(int value)
{
  struct Node *node = malloc(sizeof(struct Node));
  node->value = value;
  return node;
}

int free_node(Node *node)
{
  free(node);
  return 0;
}

int addLevel(Node *node)
{
  node->left = new_node(node->value + 1);
  node->right = new_node(node->value + 2);
}

// int grow_tree_recursively(Node* node){

// };

int make_tree(void)
{

  // set up tree
  int newlevels = 2;
  Tree *tree = malloc(sizeof(Tree));
  tree->root = new_node(0);
  Node *root = tree->root;
  // How do make this recursive, and truly ordered?!
  addLevel(root);
  addLevel(root->left);
  addLevel(root->right);
  addLevel(root->left->left);
  addLevel(root->left->right);
  addLevel(root->right->left);
  addLevel(root->right->right);







  Node *rootl = root->left;
  Node *rootr = root->right;

  // for (int i = 0; i < newlevels; i++)
  // {
  //   addLevel(rootl);
  //   addLevel(rootr);
  //   rootl = rootl->left; // problem, missing inner nodes
  //   rootr = rootr->right; // problem, missing inner nodes. An outer shell tree
  // }

  return 0;
}