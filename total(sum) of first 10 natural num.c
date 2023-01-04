#include<stdio.h>
int main()
{
    /*int i=1,sum=0,n;
    printf("enter the value of n ");
    scanf("%d",&n);
    while(i<=n)
    {
        sum+=i;
        i++;
    }
    printf("the sum of 1 to %d is %d",n,sum);
    return 0;*/
    /*int i=1,sum=0,n;
    printf("enter the value of n ");
    scanf("%d",&n);
    do
    {
       sum+=i;
       i++;
    }while (i<=n);
    printf("the sum of 1 to %d is %d\n",n,sum);
    return 0;*/
    int sum=0,n;
    printf("enter the value of n ");
    scanf("%d",&n);
    for (int i = 1; i <= n ; i++)
    {
        sum+=i;
    }
    printf("the sum of 1 to %d is %d\n",n,sum);
    return 0;
}