#include<stdio.h>
void main()
{
    int i,j,n;
 
    printf("Enter the number of lines: ");
    scanf("%d",&n);
 
    for(i=n;i>=1;i--)
    {
        for(j=i;j<n;j++)
        {
            printf(" ");
        }
 
        for(j=1; j<=(2*i-1); j++)
        {
            if(j==1 || j==(2*i-1))
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
 
    for(i=2;i<=n;i++)
    {
        for(j=i;j<n;j++)
        {
            printf(" ");
        }
 
        for(j=1;j<=(2*i-1);j++)
        {
            if(j==1 || j==(2*i-1))
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
}