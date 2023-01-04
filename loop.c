#include<stdio.h>
int main()
{
    /*int i=0;
    while(i<=20)
    {
        if(i>=10){
            printf("the natural numbers between 10 to 20 is %d\n",i);
        }
        i++;
    }*/    
    /*int a=1,n;
    printf("enter the value of n\n");
    scanf("%d",&n);
    do
    {
        printf("the natural number between 1 to 4 is %d\n",a);
        a++;
    } while (a<=n);
    */
   int n;
   printf("enter the value of n\n");
   scanf("%d",&n);
   for(int a=n;a;a--)
        printf("the natural numbers are %d\n",a);
    return 0;
}