#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

//Implementing queues in C

int queue[256];
int count = 0;

//Declaring functions
void Enqueue(int value);
void Dequeue();
int PeekFirst();
int PeekLast();

int main() {
   Enqueue(23);
   Enqueue(28);
   Enqueue(18);
   Enqueue(30);
   //Dequeue();

   for (int integer = 0; integer < count; integer++) {
      printf("%d ", queue[integer]);
   };

   printf("\n%d is the first element in the queue\n", PeekFirst());
   printf("%d is the last element in the queue\n", PeekLast());
 return 0;  
}

//Defining functions
void Enqueue(int value) {     // Insert an element at the rear end of the queue
   queue[count] = value ;     // Initially our queue is empty, so the first enqueued item is occupies the first index
   count ++;                  // The size of our queue is then incremented
};

void Dequeue() {                          // Remove the element at the front of the queue
   for (int i = 0; i < count; i++) {     //  When this happens, each element moves one step closer to the front
   queue[i] = queue[i+1];                // This is implemented by setting the value at each index to that of the index in front of it
   }
   count --;                             // The size of our queue is then decremented
};

int PeekFirst() {             // Return the element at the front of the queue
   return queue[0];           
}

int PeekLast() {              // Return the element at the rear end of the queue
   return queue[count-1];
}