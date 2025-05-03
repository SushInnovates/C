//to take input from the user
#include<stdio.h>
int main()
{
    int a;
    float b;
    float c;
    printf("Enter Value for A : ");
    scanf("%d",&a);
    printf("Enter Value for B : ");
    scanf("%f",&b);
    c = a + b;
    printf("Addition = %.2f",c); //we can set specific lenght of a output by using ".2" it will print only first 2 digit in float if we use ".4" it will print 4 digit 
    return 0;
}