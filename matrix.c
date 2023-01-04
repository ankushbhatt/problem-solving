#include<stdio.h>
int main()
{
    int A[50][50],s[50][50],k[50][50];
    int m,n;
    printf("enter the no. of rows = ");
    scanf("%d",&m);
    printf("enter the no. of columns = ");
    scanf("%d",&n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n ; j++)
        {
            scanf("%d",&A[i][j]);
        }
        
    }
    return 0;
}