#include<stdio.h>
void force();
int main()
{
    force();
    return 0;
}
void force()
{
    float mass,f,g=9.8;
    printf("enter the mass of the body in kg = ");
    scanf("%f",&mass);
    f=mass*g;
    printf("force = %f N",f);
}