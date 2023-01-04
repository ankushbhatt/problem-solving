//write a program of balanced parenthesis in c language
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    char *s;

    printf("Enter the number of parentheses pairs:");
    scanf("%d", &n);

    s = (char *)malloc((2 * n + 1) * sizeof(char));

    if (s == NULL)
    {
        printf("Memory allocation failed.");
        return 1;
    }

    s[2 * n] = '\0';

    printf("The balanced parentheses are:");
    _printParenthesis(s, n, n, 0);
    return 0;
}

void _printParenthesis(char *s, int left, int right, int count)
{
    if (left < 0 || right < left)
        return;

    if (left == 0 && right == 0)
    {
        printf("%s ", s);
        return;
    }

    else
    {
        if (left > 0)
        {
            s[count] = '(';
        }
    }
}