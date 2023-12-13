/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() {
  
  //variable declaration
  float distance, amount;

  //inputs
  printf("Enter the distance the van has travelled : ");
  scanf("%f",&distance);

  //if condition
  if(distance < 0)
  {
  	printf("There is an error");
  }
  else if(distance <= 30)
  {
  	amount = distance * 50.00; //calculation the amount to be paid
  	printf("The amount to be paid is : %.2f",amount); //output
  }
 else if(distance > 30)
  {
  	amount = (30 * 50) + ((distance - 30) * 40);
  	printf("The amount to be paid is : %.2f",amount); //output
  }
  
  return 0;
}
