#include <stdio.h>
#include <conio.h>
#include <string.h>

int main() {
   int length,i,j;
   char str[50], temp;
   printf("Enter the string to be reversed:\n");
   gets(str);
   length = strlen(str);
   i = 0;
   while(i < length) {
      temp = str[i];
      str[i] = str[length-1];
      str[length-1] = temp;
      i++;
      length--;
   }
   printf("The reversed string is:\n");
   puts(str);
   getch();
   return 0;
}