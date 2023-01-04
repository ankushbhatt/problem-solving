#include<stdio.h>
int fibo();
int main()
{
    int n;
    printf("enter the value of n = ");
    scanf("%d",&n);
    for (int i = 0; i <= n; i++)
    {
        printf("%d ",fibo(i));
    }
}
int fibo(int x)
{
    if (x==0)
    {
        return 0;
    }
    else if (x==1)
    {
        return 1;
    }
    else
        return fibo(x-1)+fibo(x-2);
}