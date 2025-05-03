#include <stdio.h>

int main(){
    int age = 14;

    if(age > 12)
    {
        printf("we are inside if\n");
        printf("Age is greater than 12\n");
    }
    if(age%2==0)
    {
        printf("We are inside another if\n");
        printf("Age is divisible by 2 \n");
    }
   
    return 0;
}