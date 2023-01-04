//Program for character by character frequency count.
#include <stdio.h>
int main() 
{
    char str[50], ch;
    int c = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter a character to find its frequency: ");
    scanf("%c", &ch);

    for (int i = 0; str[i] != '\0'; ++i) {
        if (ch == str[i])
            ++c;
    }

    printf("Frequency of %c = %d", ch, c);
    return 0;
}
