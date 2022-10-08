#include <stdio.h>
#include <stdlib.h>

// The following programme is aimed at finding the highest value in a given array

//Calling the function we are going to be using
int max_value(int[], int n);

int main() {
   int test_array[] = {1,2,3,4};
//Since the size of the array cannot be determined within the function, it has to be passed as an argument 
   int answer = max_value(test_array, 4);
   printf("%d", answer);

   return 0;
};

//Function definition
int max_value(int arr[], int n) {

// We iterate through each member of the array with a for loop which ends when i is no longer less than n
   for (int i = 1; i < n; i++) {
// If the first element of the array is less than the ith element, we swap the two
      if (arr[0] < arr[i]){
// This means that our arr[i] is the highest member of the array so far 
         arr[0] = arr[i];
      }
   }
// Once we have gone through the entire array, arr[0] is expected to be the highest value, and is thus returned
   return arr[0];
};
