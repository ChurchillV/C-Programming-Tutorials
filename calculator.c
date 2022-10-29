#include <stdio.h>
#include <conio.h>


//Function declarations
int add(int a, int b);
int subtract(int a, int b);
float divide(float a, float b);
int multiply(int a, int b);



int main(float) {
   int a, b, op;
   do { 
//Choosing an operation
   printf("Choose an operation:\n");
   printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Cancel\n\n");
   scanf("%i", &op);

//Calculator operation
   switch(op){
      case(1):
         printf("Enter the first value:\n");
         scanf("%i", &a);
         printf("Enter your second value:\n");
         scanf("%i", &b);
         printf("Answer: %i",add(a,b));
         break;

       case(2):
         printf("Enter the first value:\n");
         scanf("%i", &a);
         printf("Enter your second value:\n");
         scanf("%i", &b);
         printf("Answer: %i",subtract(a,b));
         break;

       case(3):
         printf("Enter the first value:\n");
         scanf("%i", &a);
         printf("Enter your second value:\n");
         scanf("%i", &b);
         printf("Answer: %i",multiply(a,b));
         break;

       case(4):
         printf("Enter the first value:\n");
         scanf("%i", &a);
         printf("Enter your second value:\n");
         scanf("%i", &b);

         if (b == 0){
            printf("Division by 0. Error.");
            break;
         }
         else
            printf("Answer: %f",divide(a,b));
            break;

      case(5):
         printf("Operation terminated.");
         getch();
         break;

      default:
         printf("Something's wrong, try again.");
         break;
   };

       printf("\n\n**********************************************************\n");
   }
     
   while (op!= 5);


   return 0;
}



//Function definitions
int add(int a, int b) {
   int result = a + b;
   return result;
};

int subtract(int a, int b) {
    if (b > a) {
      printf("Your answer's negative. You sure you entered the correct values?\n");
   }
   int result = a - b;
   return result;
};

float divide(float a, float b) {
   float result = a / b;
   return result;
}

int multiply(int a, int b) {
   int result = a * b;
   return result;
}

