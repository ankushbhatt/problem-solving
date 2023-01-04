#include<stdio.h>
void main()
{
    int a=10,b=2;
    char c='A';
    float d=2.5;
    
    printf("the size of a is %d and b is %d\n",sizeof(a,b));
    printf("the size of c is %d\n",sizeof(c));
    printf("the size of d is %d\n",sizeof(d));
    printf("the size of operator a+b is %d\n",sizeof(a+b));
    printf("the size of operator a+c is %d\n",sizeof(a+c));
    printf("the size of operator b+c is %d\n",sizeof(b+c));
    printf("the size of operator a+d is %d\n",sizeof(a+d));
    printf("the size of operator b+d is %d\n",sizeof(b+d));
    printf("the size of operator c+d is %d\n",sizeof(c+d));

    




}