#include<stdio.h>
int main()
{
    int sub1,sub2,sub3;
    float sum;
    printf("enter the marks of 3 subjects\n");
    scanf("%d %d %d",&sub1,&sub2,&sub3);
    sum=(sub1+sub2+sub3)/3;
    printf("the sum of 3 subject is %f\n",sum);
    if((sum<40) || sub1<33 || sub2<33 || sub3<33)
    printf("your total percentage is %f and you are failed");
    else
    printf("your total percentage is %f and you are passed");
    return 0;
}