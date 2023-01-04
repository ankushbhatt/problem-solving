//Try problem 3 using call by value and verify that it doesn’t change the value of the said variable.
#include<stdio.h>
void ch(int *a);
int main()
{
    int a,*i;
    printf("enter the value of a = ");
    scanf("%d",&a);
    i=&a;
    ch(i);
    printf("now the value of a is %d\n",*i);
    return 0;
}
void ch(int *c)
{
    *c*=10;
}