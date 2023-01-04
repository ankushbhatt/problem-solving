#include<stdio.h>
int main()
{
    char str1[100];
    int DAT[26]={0};
    int i;
    printf("enter the sentence \n");
    gets(str1);
    i=0;
   while(str1[i]!='\0')
   {

    DAT[str1[i]-'a']++;
    i++;
   }
   for(i=0;i<26;i++)
   {
    if(DAT[i]>0)
    {
    printf("%c ",i+97);
   printf("%d\n",DAT[i]);
    }
   }
}


