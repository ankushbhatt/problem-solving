//Program for finding if the given string is a palindrome.
#include <stdio.h>
#include <string.h>

int main()
{
	char str[] = { "AyA" };
	int l = 0;
	int h = strlen(str) - 1;
	while (h > l) {
		if (str[l++] != str[h--]) {
			printf("%s is not a palindrome\n", str);
			return 0;
		}
	}

	printf("%s is a palindrome\n", str);

	return 0;
}
