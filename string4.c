//Program for finding word count in the Paragraph.
#include <stdio.h>  
#include <string.h>  
   
int main()  
{  
    char sen[] = "hey";  
    int wc = 0;  
      
    for(int i = 0; i < strlen(sen)-1; i++) {   
        if(sen[i] == ' ' && isalpha(sen[i+1]) && (i > 0)) {  
            wc++;  
        }  
    }    
   
    wc++;  
    
    printf("Total number of words in the given string: %d", wc);  
   
    return 0;  
}   