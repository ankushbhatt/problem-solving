#include<stdio.h>
 
void main()
{
    int i, j, n;
 
    printf("Enter n : ");
    scanf("%d", &n);
     
    for(i=1; i<=n; i++)
    {
        for(j=i; j<=n; j++)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(i=n; i>=1; i--)
    {
        for(j=i-1; j<=n; j++)
        {
            printf(" ");
        }
        for(j=2; j<=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}