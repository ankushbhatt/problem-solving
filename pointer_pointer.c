//Write a program to print the value of a variable i by using the "pointer to pointer" type of variable.
#include<stdio.h>
int main()
{
    int i=10,*j;
    int **k;
    j=&i;
    printf("value of i = %d\n",*j);
    k=&j;
    printf("value of j is = %d\n",**k);
    return 0;
}