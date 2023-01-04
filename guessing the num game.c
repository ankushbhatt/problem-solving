#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int num,guess,num_of_guesses=1;
    srand(time(0));
    num=rand()%100+1;
    do
    {
        printf("guess the no. between 1 to 100\n",guess);
        scanf("%d",&guess);
        if (num>guess)
        {
            printf("higher no. please\n");
        }
        else if(num<guess)
        {
            printf("lower no. please\n");
        }
        else
        {
            printf("You guess the no. in %d attempts\n",num_of_guesses);
        }
        num_of_guesses++;
    } while (guess!=num);
    return 0;
}