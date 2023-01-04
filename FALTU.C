#include<stdio.h>
#include<math.h>	
void printPowerset(int arr[],int n)
{
     int m = pow(2,n);
       printf(" { ");
     for(int i = 0 ;i<m;i++)
     {    int j = i;
          int p = 0;
          printf("{ ");
          while(j>0)
          {
             if(j&1)
              printf("%d ",arr[p]);
              p++;
              j>>=1;
          }
          printf(" } ");
     }
     printf(" }");
}
int main()
{
     int n , a[100];
      printf("NAME := ANKUSH BHATT\nROLL. NO. := 2100320100028(CSE A)\n");  
     printf("enter the number of elements in the set :- "); scanf("%d",&n);
     printf("enter the elements of the set:\n");
     \
     for(int i=0;i<n;i++) scanf("%d",a+i); 
   printPowerset(a,n);
return 0;
}
