#include<stdio.h>
float ar_of_rec();
int main()
{
    ar_of_rec();
    return 0;
}
float ar_of_rec()
{
    float len ,breadth, area;
    printf("the value of lenght and breadth\n");
    scanf("%f %f",&len,&breadth);
    area=len*breadth;
    printf("area of rectangle is %f\n",area);
}