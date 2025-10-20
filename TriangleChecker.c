//*******************************************************************
// TriangleChecker.c               Author: Caleb Shimomura
// A C program to check if 3 lengths can compose a triangle.
//
//*******************************************************************

//Find the max value. Then add the other two values to see if they are 
//greater than that max value.

#include <stdio.h>
#include <stdlib.h>

int main() {
   int num1;
   int num2;
   int num3;
   //get values
   printf("Enter the three triangle side lengths: ");
   
   scanf("%d %d %d", &num1, &num2, &num3);
   
   //if 1 is bigger than 2 and 3, add 2 and 3 together and compare to 1
   //if 2 is biggest, add 1 and 3 together and compare to 2
   //if 3 is biggest, add 1 and 2 together and compare to 1
   if (num1 > num2) {
      if (num1 > num3) {
         if (num2 + num3 > num1) {
            printf("The side lengths %d and %d and %d compose a valid triangle.", num1, num2, num3);
         } else {
            printf("The side lengths %d and %d and %d do not compose a valid triangle.", num1, num2, num3);
         }
      } else {
         if (num2 + num1 > num3) {
            printf("The side lengths %d and %d and %d compose a valid triangle.", num1, num2, num3);
         } else {
            printf("The side lengths %d and %d and %d do not compose a valid triangle.", num1, num2, num3);
         }
      }
   } else if (num2 > num3) {
      if (num1 + num3 > num2) {
            printf("The side lengths %d and %d and %d compose a valid triangle.", num1, num2, num3);
      } else {
            printf("The side lengths %d and %d and %d do not compose a valid triangle.", num1, num2, num3);
      }
   } else {
      if (num2 + num1 > num3) {
            printf("The side lengths %d and %d and %d compose a valid triangle.", num1, num2, num3);
      } else {
            printf("The side lengths %d and %d and %d do not compose a valid triangle.", num1, num2, num3);
      }
   }
}