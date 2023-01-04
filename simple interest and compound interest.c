#include<stdio.h>
#include<math.h>
float main()
{
    float S_I,P,C_I,R,T;
    printf("enter the principal value= ");
    scanf("%f",&P);
    printf("enter the rate of interest= ");
    scanf("%f",&R);
    printf("for how much time= ");
    scanf("%f",&T);
    S_I=P*R*T;
    C_I=P*pow((1+R/100),T)-P;
    printf("the value of simple interest is %f\nand the value of compound interest is %f",S_I,C_I);
}
