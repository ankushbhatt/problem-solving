#include<stdio.h>
int main()
{
int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 
char week[7][10] ;
int date, mon, year, i, r, d = 0 ; 
printf("Enter a date (dd/mm/yyyy) : ") ; 
scanf("%d / %d / %d", &date, &mon, &year) ; 
if( (year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)) ) 
    month[1] = 29 ; 
for(i = 0 ; i < mon - 1 ; i++) 
    d = d + month[i] ; 
d = d + (date + year + (year / 4) - 2) ; 
d = d % 7 ; 
printf("\nThe day is : %c", week[d]) ;
  
    switch(d)
    {
    case 0:
        printf("sunday");
        break;

    case 1:
        printf("monday");
        break;

    case 2:
        printf("tuesday");
        break;

    case 3:
        printf("wednesday");
        break;

    case 4:
        printf("thursday");
        break;

    case 5:
        printf("friday");
        break;

    case 6:
        printf("saturday");
        break;


}
}
