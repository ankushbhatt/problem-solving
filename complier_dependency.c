//What will the following line produce in a C program: printf(ā%d %d %d\nā,a,++a,a++);
#include<stdio.h>
int main()
{
    int a;
    printf("a = ");
    scanf("%d",&a);
    printf("%d %d %d",a,++a,a++);  //right to left
    return 0;
}