/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   //variable declaration
   float mark1, mark2, average;

   //inputs
   printf("Enter mark 1 : "); 
   scanf("%f",&mark1);

   printf("Enter mark 2 : ");
   scanf("%f",&mark2);

   //average calculation
   average = (mark1 + mark2) / 2.0;

   //output
   printf("The average of the subject marks is %.2f",average);


   return 0;
}

