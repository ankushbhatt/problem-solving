#include<stdio.h>
int main()
{
    int basic,temp,temp2,num,round;
    char grade;
    float hra,pf,da,total_salary;
    printf("enter the basic salary");
    scanf("%d",&basic);
    printf("enter the grade in uppercase\n");
    scanf("%c", &grade);
    hra=0.20*basic;
    pf=0.11*basic;
    da=0.50*basic;
        
     switch ()
    {
    case 'A' :
        total_salary=basic+hra+da-pf+1700;
        break;
    case 'B' :
        total_salary=basic+hra+da-pf+1500;
        break;
    case 'C' :
        total_salary=basic+hra+da-pf+1300;
        break;
    default :
        printf("invalid choice");
    }
    if(total_salary>0)
    {
        temp=num*10;
        temp2=temp%10;
        if(temp2>=5)
        {
            round=total_salary;
            round++;
        }
        else
        {
            round=total_salary;
        }
    }
    printf("total salary of the employee is %d",round);
}
