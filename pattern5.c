#include<stdio.h>
 
void main()
{
    int i,j,n;
 
    printf("Enter the no of lines: ");
    scanf("%d",&n);
 
    for(i=n;i>=1;i--)
    {
        for(j=i;j<=n;j++)
        {
            printf("%c",(char)(j+64));
        }
         printf("\n");
    }
}