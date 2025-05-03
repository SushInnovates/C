#include <stdio.h>

int main(){
    int year;
        
    printf("Enter A Year = \n");
    scanf("%d",&year);

    if(year%4==0 || year&100!=0 || year%400==0)
    {
        printf("the %d is a leap Year!",year);
    }
    else
    {
        printf("The %d is a normal Year!",year);
    }
    return 0;
}