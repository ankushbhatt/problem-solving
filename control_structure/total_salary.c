/*Write a program to calculate the total salary of a person.
The user has to enter the basic salary (an integer) and the grade (an uppercase character), 
and depending upon which the total salary is calculated as -                            
totalSalary = basic + hra + da + allow – pf. where : hra = 20% of basic, da = 50% of basic, 
allow = 1700 if grade = ‘A’, allow = 1500 if grade = ‘B’, allow = 1300 if grade = ‘C' or
 any other character, pf = 11% of basic. 
Round off the total salary and then print the integral part only.*/
#include<stdio.h>
int main()
{
    float bs,da,hra,total,pf,net,allow,grade;
    printf("enter the value of basic salary= ");
    scanf("%f",&bs);
    da=bs*0.25;
    hra=bs*0.15;
    total=bs+da+hra+allow;
    pf=total*0.1;
    net=total-pf;
    printf("the net salary is %f",net);
    
}