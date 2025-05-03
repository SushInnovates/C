#include <stdio.h>

int main(){
    
    // int a =234;
    // int b = 2332;

    // a < b?printf("A is smaller than  b"):printf("b is smaller than a");

    int a,b;
    printf("Enter value for a = ");
    scanf("%d",&a);
    printf("Enter value for b = ");
    scanf("%d",&b);

    a>b?printf("a is greater than b"):printf("b is greater than a");

    return 0;
}