#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,e,sum,per;
    printf("enter the value of a= ");
    scanf("%f",&a);
    printf("enter the value of b= ");
    scanf("%f",&b);
    printf("enter the value of c= ");
    scanf("%f",&c);
    printf("enter the value of d= ");
    scanf("%f",&d);
    printf("enter the value of e= ");
    scanf("%f",&e);
    sum=a+b+c+d+e;
    per=(sum/500)*100;
    printf("the sum of marks of 5 subject = %f\nand percentage of 5 subject = %f",sum,per);
}