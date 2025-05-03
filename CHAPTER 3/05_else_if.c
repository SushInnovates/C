#include <stdio.h>

int main(){
    int age = 62;

    if( age >= 60)
    {
        printf("You are senior Citizen and you can drive");
    }
    else if (age >= 40 )
    {
        /* code */
        printf("You are Eligible for driving license");
    }
    else if (age >= 18 )
    {
        /* code */
        printf("You are Eligible for driving license");
    }
    else{
        printf("You are not eligible for driving license");
    }
    
    return 0;
}