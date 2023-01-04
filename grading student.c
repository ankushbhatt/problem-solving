#include<stdio.h>
int main()
{
    int num;
    printf("enter the num : ");
    scanf("%d",&num);
    switch (num/10)
    {
    case 10:
    case 9:
        printf("GRADE IS A\n");
        break;
        case 8:
        printf("GRADE IS B\n");
        break;
        case 7:
        printf("GRADE IS C\n");
        break;
        case 6:
        printf("GRADE IS D\n");
        break;
        default:
        printf("GRADE IS F\n");
        break;
    }
}