#include <stdio.h>

int main(){
    // write a program to check if the number is divisible by 97 or not
    int num,res;
    printf("Enter a number = ");
    scanf("%d",&num);
    res=num%97;
    printf("Result = %d",res);
    return 0;
}