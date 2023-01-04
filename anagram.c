#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str1[20], str2[20];
    int len, len1, len2, i, j, m=0, n=0;
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    len1 = strlen(str1);
    len2 = strlen(str2);
    if(len1 == len2)
    {
        len = len1;
        for(i=0; i<len; i++)
        {
            m = 0;
            for(j=0; j<len; j++)
            {
                if(str1[i] == str2[j])
                {
                    m = 1;
                    break;
                }
            }
            if(m == 0)
            {
                n = 1;
                break;
            }
        }
        if(n == 1)
            printf("\nStrings are not Anagram");
        else
            printf("\nStrings are Anagram");
    }
   
    return 0;
}