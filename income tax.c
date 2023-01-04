#include<stdio.h>
int main()
{
    float income,tax=0;
    printf("enter your income ");
    scanf("%f",&income);
    if(income>=250000 && income<=500000)
        tax=tax+0.05*(income-250000);
    else if(income>=500000 && income<=1000000)
        tax=tax+0.2*(income-500000);
    else if(income>=1000000)
        tax=tax+0.3*(income-1000000);
    printf("the tax you have to pay is %f\n",tax);
    return 0;
}