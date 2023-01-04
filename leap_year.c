#include<stdio.h>
#include<math.h>
int main()
{
    int year;
    printf("enter the year\n");
    scanf("%d",&year);
    (year%4==0) && (year%100!=0) || year%400==0 ?printf("the year %d is a leap year",year):printf("the year %d is not a leap year",year);
    return 0;
}