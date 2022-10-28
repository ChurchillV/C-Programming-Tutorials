#include <stdio.h>
#include <conio.h>
#include <string.h>

int main() {
   char str[100], substr[100];
   int i=0, j=0, length, start;

   printf("Enter the main string:\n");
   gets(str);
   printf("Enter the starting point of the substring:\n");
   scanf("%d", &start);
   printf("Enter the length of the substring:\n");
   scanf("%d", &length);
   i = start;
   while( str[i] != '\0' && length > 0) {
      substr[j] = str[i];
      i++;
      j++;
      length--;
   }

   printf("The extracted substring is:\n");
   puts(substr);
   getch();
   return 0;
}