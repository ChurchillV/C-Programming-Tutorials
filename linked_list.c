#include <stdio.h>
#include <stdlib.h>


// Implementing linked lists using structs
struct myStructure
{
   /* data */
   int data;
   struct myStructure *next;
};

void display();

int main() {
   struct myStructure*head = NULL;
   struct myStructure*second = NULL;
   struct myStructure*third = NULL;
   struct myStructure*first = NULL;

   //memory allocation
   head = (struct myStructure*)malloc(sizeof(struct myStructure));
   second = (struct myStructure*)malloc(sizeof(struct myStructure));
   third = (struct myStructure*)malloc(sizeof(struct myStructure));
   first = (struct myStructure*)malloc(sizeof(struct myStructure));
   
   //assigning values to nodes
   head -> data = 10;
   first -> data = 10;
   second -> data = 20;
   third -> data = 30;

   //linking nodes
   head -> next = first;
   first -> next = second;
   second -> next = third;
   third -> next = NULL;

   //calling display
   display(head);

   return 0;
}

void display(struct myStructure*n) {
   while (n!=NULL) {
      n = n->next;
      printf("%d ", n-> data);
   }
}
