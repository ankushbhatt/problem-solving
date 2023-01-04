#include<stdio.h>
void avg();
int main()
{
    avg();
    return 0;
}
void avg()
{
    float a,b,c,average;
    printf("enter the value of a , b and c\n");
    scanf("%f %f %f",&a,&b,&c);
    average=(a+b+c)/3;
    printf("the average of %f , %f and %f is %f ",a,b,c,average);
}