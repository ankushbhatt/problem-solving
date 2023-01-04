#include<stdio.h>
int magic_square_row(int i)
{
    int sum=0;
        for(j=0;j<m;j++)
        sum=sum+a[i][j];    
    return sum;
}
int magic_square_column(int i)
{
    int sum=0;
        for(j=0;j<m;j++)
        sum=sum+a[j][i];    
    return sum;
}
int main()
{
    int a[10][10];
    int n,m,i,j,k;
    int sum1=0;
    int sum2=0;
    printf("enter the size of the matrix");
    scanf("%d%d",&n);
    printf("enter the elements of the array");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    int flag=0;
    {
    for(i=0;i<n;i++)
    {
        sum1=magic_square_row(i);
        sum2=magic_square_row(i+1);
        if(sum1==sum2)
        {
            flag=1;
        }
        else 
        flag=0;
    }
    if(flag==1)
    printf("all rows have same sum");
     for(i=0;i<m;i++)
     {
        sum1=magic_square_column(i);
        sum2=magic_square_column(i+1);
        if(sum1==sum2)
        {
            flag=1;
        }
        else 
        flag=0;
    }
    if(flag==1)
    printf("all columns have same sum");
    }
    
}
