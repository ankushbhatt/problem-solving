//WAP to calculate the sum of the numbers occurring in the multiplication table of 8(Consider 8x1 to 8x10).
#include<stdio.h>
int main()
{
    int i,n=8,sum=0;
    for ( i = 1; i < 11; i++)
    {
        n=8*i;
        sum+=n;
    }
    printf("%d",sum);
    return 0;
}