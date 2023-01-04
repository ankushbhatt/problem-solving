//Write a recursive function to calculate the sum of first n natural numbers.
#include<stdio.h>
int sum();
int main()
{
    int n;
    printf("enter the value of n = ");
    scanf("%d",&n);
    printf("sum = %d",sum(n));
    return 0;
}
int sum(int n)
{
    if(n!=0)
    return n+sum(n-1);
    else
    return n;
}