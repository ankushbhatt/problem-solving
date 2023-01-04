#include<stdio.h>
void transpose_1(int m1,int n1,int A[10][10])
{
    int B[10][10];
    int i, j;
    for (i = 0; i < m1; i++)
    for (j = 0; j < n1; j++)
    B[i][j] = A[j][i];
    for(i=0;i<m1;i++)
    {
        for(j=0;j<n1;j++)
        A[i][j]=B[i][j];
    }

}
void reverse_row(int m,int n,int B[10][10])
{
    int a[100];
    int i,j,t=0;
    i=0;
    j=n-1;
    while(i<j)
    {
       t=B[m][i];
       B[m][i]=B[m][j];
       B[m][j]=t;
       i++;
       j--;
    }
}
void reverse_column(int m,int n,int B[10][10])
{
    int a[100];
    int i,j,t=0;
    i=0;
    j=m-1;
    while(i<j)
    {
       t=B[i][n];
       B[i][n]=B[j][n];
       B[j][n]=t;
       i++;
       j--;
    }
}
int main()
{
    int m1,n1,c;
    int i,j,A[10][10];
    printf("ENTER THE ROWS AND COLUMNS OF THE ARRAYS FOR TRANSPOSE\n");
    scanf("%d%d",&m1,&n1);
    for(int i=0;i<m1;i++)
    {
        for(j=0;j<n1;j++)
        scanf("%d",&A[i][j]);
    }
    printf("MATRIX A \n");
     for(i=0;i<m1;i++)
    {
        for(j=0;j<n1;j++)
        printf("%d  ",A[i][j]);
        printf("\n");
    }
    transpose_1(m1,n1,A);
    printf("ENTER 1 FOR CLOCKWISE ROTATIONA AND 2 FOR ANTICLOCKWISE ROTATION\n");
    scanf("%d",&c);
    if(c==1)
    {
        for(i=0;i<m1;i++)
        reverse_row(i,n1,A);
        printf("MATRIX AFTER CLOCKWISE ROTATION\n");
        for(i=0;i<m1;i++)
        {
            for(j=0;j<n1;j++)
            {
                 printf("%d ",A[i][j]);
            }
        printf("\n");
        }
    }
    else if(c==2)
    {
        for(i=0;i<n1;i++)
        reverse_column(m1,i,A);
        printf("MATRIX AFTER ANTICLOCKWISE ROTATION\n");
        for(i=0;i<m1;i++)
        {
            for(j=0;j<n1;j++)
            {
                printf("%d ",A[i][j]);
            }
            printf("\n");
        }
    }
    else
    printf("WRONG CHOICE\n");

}