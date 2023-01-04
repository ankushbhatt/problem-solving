#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5,6,7,7,8,8,8};
    int DAT[10]={0};
    int i,max=a[0];
    for ( i = 0; i <=10; i++)
    {
        if(a[i]>max)
        max=a[i];
    for ( i = 0; i <=10; i++)
    {
        DAT[a[i]]++;
    }
    for ( i = 1; i <= max; i++)
    {
        if(DAT[i]>1)
        printf("%d",i);
    }
    
    }
    
}