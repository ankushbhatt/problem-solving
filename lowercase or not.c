#include<stdio.h>
int main()
{
    char a;
    printf("enter the character: ");
    scanf("%c",&a);
    if(a<=122 && a>=97)
        printf("the character %c is lowercase",a);
    else
        printf("the character %c is not a lowercase",a);
    return 0;
}