#include<stdio.h>
int main()
{
    int n,prime=1;
    printf("enter the value of n = ");
    scanf("%d",&n);
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            prime=0;
            break;  
        }
    }
    if (prime==0)
    {
        printf("Its not a prime number\n");
    }
    else
    printf("Its a prime number\n");
    return 0;
   /* int n,i=2;
    printf("enter the value of n = ");
    scanf("%d",&n);
    while (i<n)
    {
        if (n%i==0)
        {
             printf("%d is not a prime no.",n);
             break;
        }
        i++;
    }
    if(i==n)
    {
        printf("%d is a prime number\n",n);
    }
    return 0;
    /*int n,i=3;
    printf("enter the value of n = ");
    scanf("%d",&n);
    do
    {
        if (n%i==0)
        {
             printf("%d is not a prime no.\n",n);
             break;
        }
        i++;
    } while (i<n);
    if(i==n)
    printf("%d is a prime no.\n",n);
    return 0;*/
}