#include<stdio.h>
int main()
{
    int a;
    printf("enter the values of a= ");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("%d is even number\n",a);
    }
    else
    {
        printf("%d is odd number",a);
    }

}