#include <stdio.h>
#include <stdlib.h>

//Implementing Binary Trees using Structs in C

//Struct Declaration
struct Binary_tree {
   int data;
   struct Binary_tree*left;
   struct Binary_tree*right;
};


//Function Declarations
struct Binary_tree*CreateNode();
void preorder(struct Binary_tree*node);
void postorder(struct Binary_tree*node);
void inorder(struct Binary_tree*node);


int main() {
   struct Binary_tree* root = NULL;
   root = CreateNode(15);                    //Level 1

   root->left = CreateNode(7);               //Level 2

   root->left->left = CreateNode(4);         //Level 3
   root->left->left->left = CreateNode(2);   //Level 4
   root->left->left->right = CreateNode(2);  //Level 4
   
   root->left->right = CreateNode(3);        //Level 3
   root->left->right->left = CreateNode(1);  //Level 4
   root->left->right->right = CreateNode(2); //Level 4



   root->right = CreateNode(8);              //Level 2
  
   root->right->left = CreateNode(6);        //Level 3
   root->right->left->left = CreateNode(3);  //Level 4
   root->right->left->right = CreateNode(3); //Level 4

   root->right->right = CreateNode(2);       //Level 3
   root->right->right->left = CreateNode(1); //Level 4
   root->right->right->right = CreateNode(1);//Level 4


   printf("Preorder: ");
   preorder(root);
   printf("\n");

   printf("Postorder: ");
   postorder(root);
   printf("\n");

   printf("Inorder: ");
   inorder(root);
   printf("\n");

   return 0;
}



//Defining functions

struct Binary_tree*CreateNode(int data) {
   struct Binary_tree* node = (struct Binary_tree*)malloc(sizeof(struct Binary_tree));
   node -> data = data;
   node -> left = node -> right = NULL;
   return node;
};

void preorder(struct Binary_tree *node) {
   if (node == NULL) return;
   printf("%d, ", node->data);
   preorder(node->left);
   preorder(node->right);

   return;
};

void postorder(struct Binary_tree *node) {
   if (node == NULL) return;
   preorder(node->left);
   preorder(node->right);
   printf("%d, ", node->data);
   
   return;
};

void inorder(struct Binary_tree *node) {
   if (node == NULL) return;
   preorder(node->left);
   printf("%d, ", node->data);
   preorder(node->right);
   
   return;
};


// This is the binary tree we're implementing
/*
                              15                                  //Level 1
               7                                8                 //Level 2       
         4           3                   6              2         //Level 3
      2   2        1   2               3   3          1   1       //Level 4

*/




