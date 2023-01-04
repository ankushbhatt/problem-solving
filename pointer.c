/*#include<stdio.h>
int main()
{
int i=8;
int *j;
j=&i;
printf("Add i=%u\n",&i);
printf("Add i=%u\n",j);
printf("Add j=%u\n",&j);
printf("Value i=%d\n",i);
printf("Value i=%d\n",*(&i));
printf("Value i=%d\n",*j);
return 0;
}*/
//Write a program having a variable i. Print the address of i. Pass this variable to a function and print its address. Are these addresses same? Why?
#include<stdio.h>
void add();
int main()
{

    int i;
    printf("enter  the value of i = ");
    scanf("%d",&i);
    printf("address of i %u\n",&i);
    add(i);
    return 0;
}
void add()
{
    int a;
    printf("the address of a is %u\n",&a);
}