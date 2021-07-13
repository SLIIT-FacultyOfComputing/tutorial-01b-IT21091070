/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main()
 {
   int num;
   int k = 0;
   int sum = 0;

   printf("Input the number n :");
   scanf("%d",&num);

   for(k = 0; k <= num; k++ )
   {
     sum = sum + k;
   }
   printf("Sum =%d",sum);
  
  return 0;
}

