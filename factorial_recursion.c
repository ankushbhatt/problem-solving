#include<stdio.h>
int fact(int a);
int main()
{
    int a;
    printf("enter the value of a= ");
    scanf("%d",&a);
    printf("the factorial of %d is %d\n",a,fact(a));
    return 0;
}
int fact(int a)
{
if(a==0 || a==1)
{
    return 1;
}
else
    return a*fact(a-1);
}