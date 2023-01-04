#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter any two no.s\n");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("the values after swaping A= %d AND B=%d\n",a,b);
    printf("swap without 3rd variable\n");
    a=a+b;
    b=a-b;
    a=a-b;
    printf("the values after swaping A= %d AND B=%d",a,b);
}