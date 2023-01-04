/*Write a program to calculate the total salary of a person. The user has to enter the basic salary (an integer) and 
the grade (an uppercase character), and depending upon which the total salary is calculated as - 
totalSalary = basic + hra + da + allow – pf. where : hra = 20% of basic, da = 50% of basic, allow = 1700 if grade = ‘A’, 
allow = 1500 if grade = ‘B’, allow = 1300 if grade = ‘C' or any other character, pf = 11% of basic. Round off the total 
salary and then print the integral part only.*/

#include<stdio.h>
int main()
{
    float bs,da,hra,gs,pf,totalsalary,allow;
    char grade;
    printf("enter the value of basic salary= ");
    scanf("%f",&bs);
    printf("Enter the grade= ");
    scanf("%s" , &grade);
    da=bs*0.5;
    hra=bs*0.2;
    gs=bs+da+hra;
    pf=bs*0.11;
    if (grade == 'A')
    { 
        allow = 1700;
    }

    else if  (grade == 'B')
    { 
        allow = 1500;
    }

    else 
    {
        allow = 1300;
    }

    totalsalary = gs + allow - pf;
    printf("the net salary is %f",totalsalary);
    
}