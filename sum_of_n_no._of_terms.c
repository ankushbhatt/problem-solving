//Find the sum of first n terms of the following series: 1! + 2! + 3! + 4!.............
#include<stdio.h>  
int main()  
{  
    int n,s ;
    printf("enter the value of n = ") ;
    scanf("%d" , &s);
    int sum = (s * (s + 1) )/ 2; 
    printf("Sum of %d natural number is = %d", s, sum);   
    return 0;  
}  