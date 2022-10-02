/* This is to check which of the listed options of coode will run and if so, 
   what the expected output should be.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
   // Essentially, if the card is between 2 and 7, the value of the card is reduced by one, and the output is "Small Card"
   int card = 1;
   if (card > 1) 
      card = card - 1;
      if (card < 7)
         puts("Small Card!");
   else 
      puts("Ace!");
   printf("%d", card);
   
   return 0;
}

   // From the look of things, the output is expected to be "Small Card"
   // The second code block won't compile because of the misplaced brace for the else statement
   // Third code block looks a lot like the first. So it should work
   // Fourth code block essentially has the same problem as the first. The first if statement has a poorly placed brace
