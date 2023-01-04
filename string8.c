//Program for finding all prefixes of a string.
#include<stdio.h>
#include<string.h>
void main()
{
char str[20];
int n,i,j;
printf("Enter string:");
scanf("%s",str);
n=strlen(str);
printf("\nThe prefixes are:");
for(i=0;i<n;i++)
{
for(j=0;j<=i-1;j++)
printf("%c",str[j]);
printf("\n");
}
}