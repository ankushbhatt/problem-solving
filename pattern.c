#include<stdio.h>
int pattern();
int main()
{
    pattern();
    return 0;
}
int pattern()
{
    int n;
    printf("enter the value of n = ");
    scanf("%d",&n);
    int k=2;
    for(int i=0;i<n;i++)  //for rows
  {
    for(int j=0;j<=i;j++)   //for columns
    {
      printf("%d ",k++);
    }
    printf("\n"); //new line
  }
}


/*#include<stdio.h>
int pattern();
int main()
{
    pattern();
    return 0;
}
int pattern()
{
    int n;
    printf("enter the value of n = ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)  //for rows
  {
    for(int j=0;j<n-i;j++)   //for columns
    {
      printf(" ");
    }
    int a = 1;
    for(int k=0;k<=i;k++) 
    {
      printf("%d",a--);
    }
    printf("\n"); //new line
  }
}


#include<stdio.h>
int pattern();
int main()
{
    pattern();
    return 0;
}
int pattern()
{
    int n;
    printf("enter the value of n = ");
    scanf("%d",&n);
    int k=1;
    for(int i=0;i<n;i++)  //for rows
  {
    for(int j=0;j<=i;j++)   //for columns
    {
      printf("%d ",k++);
    }
    printf("\n"); //new line
  }
}*/