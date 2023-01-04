//Program for finding all suffixes of a string.
#include <stdio.h>
#include <string.h>
 
int main()
{
    int i, n;
    char str[100];
 
    printf("Enter a string: ");
    gets(str);
 
    n = strlen(str);
 
    printf("All suffixes of \"%s\" are:\n", str);
 
    for (i = 1; i < n; i++)
    {
        printf("%s\n", str + i);
    }
 
    return 0;
}