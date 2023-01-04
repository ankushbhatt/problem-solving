#include<stdio.h>
#include<math.h>
void area();
int main()
{
    area();
    return 0;
}
void area()
{
    int side,area;
    printf("enter the value of side of the square= ");
    scanf("%d",&side);
    area=side*side;
    printf("area of the square is %d\n",area);
}