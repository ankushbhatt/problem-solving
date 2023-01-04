#include <stdio.h>

int main()
{
    int i, j;
    char a = 'E', b;

    for(i=1; i<=5; i++)
    {
        b = a;
        for(j=1; j<=i; j++)
        {
            printf("%c", b);
            b--;
        }
        printf("\n");
    }

    return 0;
}