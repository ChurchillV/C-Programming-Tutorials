#include <stdio.h>
#include <stdlib.h>


// Identify values within the array which occur only once 
int main() {
   printf("The value that doesn't repeat itself is: ");
   int test_array[] = {1,2,1,2,3,4,3};
   int size = sizeof(test_array)/sizeof(test_array[0]);
   int res = 0;
   for (int i = 0; i < size; i++){
      res = res ^ test_array[i];
   };
   printf("%d", res);
   return 0;
}