#include<stdio.h>
int main()
{
    int i, j, N;
    printf("Enter the value of N : ");
    scanf("%d",&N);
    for(i=1; i<=N; i++)
    {
        for(j=1; j<=N-i; j++)
        {
            printf(" ");
        }
        //loop to print the increasing sequence
        for(j=i; j>=1; j--)
        {
            printf("%d", j);
        }
        //loop to print the decreasing sequence
        for(j=2; j<=i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}