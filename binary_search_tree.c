#include <stdio.h>
#include <stdlib.h>

//Implementing Binary Search Trees in C


//Struct declaration
struct Node {
   int data;
   struct Node* left;
   struct Node* right;
};

//Function declarations
struct Node*CreateNode(int value);
void inorder(struct Node*root);
struct Node*insertNode(struct Node*root, int value);


//Working area
int main() {

   struct Node*root = NULL;
   root = insertNode(root,100);
   insertNode(root, 50);
   insertNode(root, 30);
   insertNode(root, 60);
   insertNode(root, 70);
   insertNode(root, 90);
   insertNode(root, 20);
   insertNode(root, 10);

   inorder(root);


   return 0;
};


//Function definitions


struct Node*CreateNode(int value) {                               //Create a node and give it a value
   struct Node*root = (struct Node*)malloc(sizeof(struct Node));
   root->data = value;
   root->left = root->right = NULL;
};

struct Node*insertNode(struct Node*root, int value) {             //Insert a node into the existing binary tree
   if (root == NULL) {
      return CreateNode(value);
   }

   if (value < root->data) {                                      //Sort it such that if the inserted value is less than the 
      root->left = insertNode(root->left, value);                 //node, it is shifted to the left of the node
   }

   else if(value > root->data) {                                  //If it's greater than the node, it is shifted to the right
      root->right = insertNode(root->right, value);
   }
   return root;
}

void inorder(struct Node*root) {                                  //Traverse through the binary tree
   if (root!=NULL) {
      inorder(root->left);
      printf("%d\n", root->data);
      inorder(root->right);
   }
}