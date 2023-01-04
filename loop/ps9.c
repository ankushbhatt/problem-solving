#include<stdio.h>
int main()
{
    int i, j, n=3;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n*2-1; j++)
        {
            if(j>=n-(i-1) && j<=n+(i-1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    for(i=n-1; i>0; i--)
    {
        for(j=1; j<=n*2-1; j++)
        {
            if(j>=n-(i-1) && j<=n+(i-1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}