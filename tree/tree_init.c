#include <stdio.h>

int main(void){

  typedef struct Node{
    int value;
    int curDepth;
    struct Node* left;
    struct Node* right;
  } Node;

  typedef struct Tree{
    int numNodes;
    int numNodesLeft;
    int numNodesRight;
    int depth;
    int diameter;
    float lrRatio;
    Node* root;
  } Tree;

  int levels = 5;
  Tree* tree = malloc(sizeof Tree);
  tree->root = malloc(sizeof(Node));

  return 0;
}