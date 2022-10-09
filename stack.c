#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
//Implementing stacks in C programming

//Functions and Global variable declarations
int stack[10];
int count = 0;
void push();
void pop();
int peak();



//Working Area
int main() {
   push(45);
   push(23);
   push(28);
   push(29);
   push(3);
   push(17);
   pop();
   pop();
   int x;

   for (x=0 ; x < count ;x++){    //Iterate through the stack and print the various elements
      printf("%d ", stack[x]);
   };
   peak();
   //printf("%s", isEmpty());
   return 0;
}



//Function definitions
void push(int value) {         //Add an element to the top of the stack
   stack[count] = value;
   count++;
};

void pop() {                   //Remove an element from the stack
   int index = count - 2;     
   for(int i = 0; i < index; i++) {
      stack[i] = stack[i];
   };
   count--;
};

int peak() {                                                   //Return the value at the top of the stack   
   printf("\n%d is at the top of the stack.\n", stack[count-1]);
};

