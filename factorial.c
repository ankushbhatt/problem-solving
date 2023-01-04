#include<stdio.h>
int main()
{ 
    /*int num,i=1,factorial=1;
    printf("enter the value of num= ");
    scanf("%d",&num);
    while (i<=num)
    {
        factorial *=i;
        i++;
    }*/
    /*int n,factorial=1;
    printf("n= ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        factorial *=i;
    }*/
    int n,i=1,factorial=1;
    printf("enter the value of n= ");
    scanf("%d",&n);
    do
    {
        factorial *=i;
        i++;
    } while (i<=n);
    printf("the factorial of %d is %d\n",n,factorial);
    return 0;
}