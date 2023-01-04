#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("enter the value of four numbers = ");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a>b && a>c && a>d)
        printf("%d is greatest them all",a);
    if(b>a && b>c && b>d)
        printf("%d is greatest them all",b);
    if(c>a && c>b && c>d)
        printf("%d is greatest them all",c);
    if(d>a && d>b && d>c)
        printf("%d is greatest them all",d);
    return 0;
}