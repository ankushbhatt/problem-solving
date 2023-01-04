#include<stdio.h>
void temperature();
int main()
{
    temperature();
    return 0;
}
void temperature()
{
    float celcius,fahrenheit;
    printf("the temperature is degree celcius\n");
    scanf("%f",&celcius);
    fahrenheit = 1.8*celcius+32;
    printf("the temperature measured in fahrenheit is %f\n",fahrenheit);
}