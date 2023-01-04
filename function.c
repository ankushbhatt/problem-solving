#include<stdio.h>
/*void GOOD_MORNING();
void GOOD_AFTERNOON();
void GOOD_NIGHT();
int main()
{
    GOOD_MORNING();
    GOOD_AFTERNOON();
    GOOD_NIGHT();
    return 0;
}
void GOOD_MORNING()
{
    printf("GOOD MORNING\n");
}
void GOOD_AFTERNOON()
{
    printf("GOOD AFTERNOON\n");
}
void GOOD_NIGHT()
{
    printf("GOOD NIGHT\n");*/
int sum(int a , int b);
int main()
{
    int a,b,d;
    d=sum(a,b);
    return 0;
}
int sum(int a, int b)
{
    int c;
    printf("enter the value of a and b\n",a,b);
    scanf("%d %d",&a,&b);
    c=a+b;
    return c;
}