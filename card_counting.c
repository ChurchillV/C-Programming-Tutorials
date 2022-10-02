/* This code is meant to check the value of various cards in a deck and also determine the 
   chances of drawing a good card. It's an excercise from the Head First C programming book
   by David and Dawn Griffin. I really hope this works. */


/*  ## UPDATE ##
   So... the modification to the code aims to do tge following:
   1. End the programme after the the player enters a 'X'
   2. Provide an error message if the user provides a character outside of the stated parameters
   3. Keep a running count of the game
*/
# include <stdio.h>
# include <stdlib.h>

int main() {
   char card_name[3];
   int value = 0;
   printf("Enter the card value: ");
   scanf("%2s", &card_name);
// We're adding a while loop 
   while(card_name[0] != 'X') {
      switch (card_name[0]) {
      case 'K':
      case 'Q':
      case 'J':
         value = value + 10;
         break;
         //printf("Oh boy! It's a Jack!");
      
      case 'A':
         value = value + 11;
         break;
         //printf("It's the big one! It's an Ace!");
      
      case 'X':
         continue;
      default:
      value = atoi(card_name);
      //printf("Nothing special, just a %d.", value);
      
      }
      }

      // This is for the second part of the code block

      /*printf("What was the value again?");
      scanf("%s", card_name);*/

   if ((value >= 3) && (value <= 6)) {
      puts("Our count has gone up!");
   }

   else if (value >= 10) {
      puts("The count has gone down.");
   }


   return 0;
}
