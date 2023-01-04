/*#include<stdio.h>
int main()
{
    /*int a;
    printf("enter the value of a= ");
    scanf("%d",&a);
    printf("%d is divisible by 97\n",a%97);
    printf("the value of 6+5 is %d\n ",6+5);
    int x=2,y=3,z=3,k=1;
    printf("the value of the expression 3*x/y-z+k is %d ",3*x/y-z+k);*/
    /*int a=10;
    if(a=11)
        printf(“i am 11”);
    else
        printf(“I am not 11”);*/
/*int change(int a){

    a=77;          

    return 0;*/
/*#include<stdio.h>
int main()
{
    int a[10][10],t[10][10],i,j,flag=0;
    int r,c;
    printf("Enter the number of row and column of the matrix\n");
    scanf("%d%d",&r,&c);
    printf("Enter the element of the  matrix\n");
    // Input matrix a[][]
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
          scanf("%d",&a[i][j]);
    }
    
    // logic for compute transpose
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            t[i][j]=a[j][i];
        }
    }
    
    // Display the transpose
    printf("the transpose is:-\n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
          printf("%d ",t[i][j]);
        printf("\n");
    }
    
    //logic for checking matrix is symmetric or not
    if(r==c)
      printf("Matrix is symmetric\n");
    else
    {
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(t[i][j]!=a[i][j])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
              break;
            
        }
        if(flag==0)
          printf("Matrix is a symmetric Matrix\n");
        else
         printf("Matrix is not a symmetric Matrix\n");
    }
    return 0;
}
*/
#include<stdio.h>
#include<string.h>
void main()
{
    char string[25],reverse_string[25]={'\0'};
    int i, len=0 ,a=0;
    printf("enter the string\n");
    gets(string);
    for ( i = 0; string[i] != '\0'; i++)
    {
        len++;
    }
    for ( i = len-1; i >= 0; i--)
    {
        reverse_string[len-i-1]=string[i];
    }
    for ( a = 1,i=0;i<len;i++)
    {
        if(reverse_string[i]!=string[i])
        a=0;
    }
    if(a==1)
    {
        printf("%s is a palindrome \n",string);
    }
    else
    {
        printf("%s is not a palindrome \n",string);
    }
}
    