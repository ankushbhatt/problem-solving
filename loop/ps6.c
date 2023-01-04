#include <stdio.h>
int main()
{
    int N, i, j, k;
    printf("Enter N: ");
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        for(j=1; j<=N-i; j++)
        {
            printf(" ");
        }

        for(k=i; k<=2*i-1; k++)
        {
            printf("%d", k);
        }

        for(k=2*i-2; k>=i; k--)
        {
            printf("%d", k);
        }

        printf("\n");
    }

    return 0;
}