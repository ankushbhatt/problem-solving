#include<stdio.h>
int main()
{
    float pie=3.14,radius,vol,height;
    printf("enter the value of radius=");
    scanf("%f",&radius);
    printf("enter the value of height=");
    scanf("%f",&height);
    vol=pie*(radius*radius)*height;
    printf("vol of cylinder is %f",vol);
}
