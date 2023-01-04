//Write a program to print the address of a variable. Use this address to get the value of this variable
#include<stdio.h>
int main()
{
    int a,*b;
    printf("enter the value of a = ");
    scanf("%d",&a);
    printf("the address of a is %d\n",&a);
    b=&a;
    printf("the value of at address a is %d\n",*b);
    return 0;
}
