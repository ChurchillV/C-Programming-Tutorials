#include <stdio.h>
#include <conio.h>

int main() {

   int test_array[10], i;
   printf("Enter the array elements: ");
   for (i = 1; i<10; i++) {
      scanf("%d", &test_array[i]);
   };
   build_max_heap(*test_array, 1, 9);
   heap_sort(*test_array, 9);
   printf("\nSorted Array:\n");
   for (i = 1; i<10; i++){
   }
      printf("%d\n",test_array[i]);
   return 0;
}

void build_max_heap(int array[], int start, int end) {
   int i;
   for (i = end/2; i >= start; i--)
   heapify(array[], i, end);
};

int heapify(int array[], int position, int size) {
   int max = position, left = position*2, right = left+1, t;

   if (left <= size && array[left] > array[max] )
      max = left;
   if (right <= size && array[right] > array[max])
      max = right;
   if (position != max) {
      t = array[position];
      array[position] = array[max];
      array[max] = t;
      heapify(array, max, size);
   }
};

void heap_sort(int array[], int size) {
   int i, t;
   for(i=size; i >= 2; i--)
   t = array[1];
   array[1] = array[i];
   array[i] = t;
}

