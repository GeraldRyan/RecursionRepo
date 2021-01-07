#include <stdio.h>
#include <stdlib.h>


int tree_values[] = {11, 71, 35, 85, 34, 26, 48, 95, 57, 82, 15, 35};

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

Node *create_new_node(int value)
{
  struct Node *node = malloc(sizeof(struct Node));
  node->value = value;
  return node;
}

int free_node(Node *node)
{
  free(node);
  return 1;
}

int addLevel(Node *node)
{
  node->left = create_new_node(node->value + 1);
  node->right = create_new_node(node->value + 2);
}

int insert_node_binary_tree(struct Tree* tree, int value){

  Node* new_node = create_new_node(value);




  return 1;
}

// int grow_tree_recursively(Node* node){

// };

Tree* make_tree(int* values)
{

  // set up tree
  int newlevels = 2;
  Tree *tree = malloc(sizeof(Tree));
  Node* root = create_new_node(50);
  tree->root = root;
  tree->numNodes++;

  for (int i )

  // addLevel(root);
  // addLevel(root->left);
  // addLevel(root->right);
  // addLevel(root->left->left);
  // addLevel(root->left->right);
  // addLevel(root->right->left);
  // addLevel(root->right->right);

  // Node *rootl = root->left;
  // Node *rootr = root->right;

  // for (int i = 0; i < newlevels; i++)
  // {
  //   addLevel(rootl);
  //   addLevel(rootr);
  //   rootl = rootl->left; // problem, missing inner nodes
  //   rootr = rootr->right; // problem, missing inner nodes. An outer shell tree
  // }

  return tree;
}