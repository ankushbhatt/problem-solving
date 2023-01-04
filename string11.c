//Program to remove whitespace from the beginning, end, or both beginning and end, of a string.

/*#include <stdio.h> 
#include <string.h> 

int main() 
{ 
	char str[20] = "   Ankush Bhatt   "; 
	int i, j; 

	for (i = 0; str[i] == ' '; i++) 
        ;
	for (j = 0; str[j + i] != '\0'; j++) 
		str[j] = str[j + i]; 

	str[j] = '\0'; 

	for (i = j - 1; str[i] == ' '; i--) 
		; 
	str[i + 1] = '\0'; 

	printf("%s", str); 
	return 0; 
}*/

#include <stdio.h> 
#include <string.h> 

int main() 
{ 
	
	char str[50] = "   Hello    "; 
	
	printf("Original string: \"%s\"\n", str); 
	
	printf("After removing whitespace: \"%s\"\n", strtok(str, " ")); 

	return 0; 
}