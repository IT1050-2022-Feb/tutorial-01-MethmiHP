/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {

  //variable declaration
  int number, count, sum;
  count = 1;
  sum = 0;

  //input
  printf("Enter upto which number that you have to get the sum : ");
  scanf("%d",&number);

  //while loop
  while(count <= number)
    {
      sum = sum + count; //calculate the sum
      count++ ;
    }
  //output
  printf("Sum of the numbers : %d",sum);
  
  return 0;
}

