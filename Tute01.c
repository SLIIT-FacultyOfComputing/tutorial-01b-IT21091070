/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int sub1;
  int sub2;
  int avg;

  printf("Enter marks of subject1:");
  scanf("%d", &sub1);

  printf("Enter marks of subject2:");
  scanf("%d", &sub2);

  avg = (sub1 + sub2)/2;

printf("Average of the two marks:%d \n",avg);
  
  return 0;
}

