//Write a program to change the value of a variable to ten times its current value. Write a function and pass the value by reference.
#include<stdio.h>
void cng(int *i);
int main()
{
    int a,*i;
    printf("enter the value of a = ");
    scanf("%d",&a); 
    i=&a;
   
    printf("the current value of a is =%d\n",a);
    
    cng(i);
    printf("now,the value of a is =%d",*i);
    return 0;
}
void cng(int *i)
{
    *i*=10;
}