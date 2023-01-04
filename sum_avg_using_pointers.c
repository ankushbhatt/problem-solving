//Write a program using a function that calculates the sum and average of two numbers. Use pointers and print the values of sum and average in main().
#include<stdio.h>
int main()
{
   int a , b , sum , *s ,*avg;
   float average;

   printf("Enter two integers \n");
   scanf("%d%d", &a, &b);

   s= &a;
   avg = &b;
   sum = *s + *avg;
   average = sum/2;

   printf("Sum of the numbers = %d\n", sum);
   printf("average of the numbers = %f\n", average);

   return 0;
}