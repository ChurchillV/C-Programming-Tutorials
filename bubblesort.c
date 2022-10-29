#include <stdio.h>
#include <conio.h>


//A simple bubble sort algorithm 😁

void sort(int arr[], int size);

int main() {
   int array[] = {2, 5, 7, 9, 1, 4, 6, 8};
   int size = sizeof(array)/sizeof(array[0]);
   sort(array,size);
   
   for (int i = 0; i < size-1; i++) {
      printf("%d ", array[i]);
   };

   return 0;
}

void sort(int arr[], int size) {
   int i,j,temp;

   for (i = 0; i < size - 1; i++) {
      for (j = 0; j < size - 1; j++) {
         if (arr[j] > arr[j+1]){
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
         }
      }
   }

}