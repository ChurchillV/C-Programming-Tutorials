#include <stdio.h>
#include <conio.h>
#include <string.h>

int main() {
   char str1[50],str2[50];
   int len1, len2, i=0, same = 0;
   printf("Enter the value of the first string: ");
   gets(str1);
   printf("Enter the value of the second string: ");
   gets(str2);
   len1 = strlen(str1);
   len2 = strlen(str2);

   if (len1 == len2) {
      while (i < len1) {
         if (str1[i] == str2[i])
            i++;
         else break;
      };

      if (i == len1) {
         same = 1;
         printf("\nThe two strings are equal");
      };
   };

   if (len1 != len2) {
      printf("\nThe two strings are not equal");
   }

   if (same==0) {
      if (str1[i] > str2[i]) {
         printf("\nString 1 is greater than String 2");
      }
      else if (str2[i] > str1[i]) {
         printf("\nString 2 is greater than String 1");
      }
   }

   getch();
   return 0;
};