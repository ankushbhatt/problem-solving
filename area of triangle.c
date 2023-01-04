#include <stdio.h>
#include<math.h>
int main()
{
    int a, b, c, area, s;
    printf("enter the value of a= ");
    scanf("%d", &a);
    printf("enter the value of b= ");
    scanf("%d", &b);
    printf("enter the value of c= ");
    scanf("%d", &c);
    s= (a + b + c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("the area of triangle is %d", area);
}