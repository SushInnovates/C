#include <stdio.h>

int main(){
    float p,r,t,SI;
    printf("Enter Value for Principle = ");
    scanf("%f",&p);
    printf("Enter Value for Rate = ");
    scanf("%f",&r);
    printf("Enter Value for Time = ");
    scanf("%f",&t);
    SI = p * r * t/100;

    printf("Simple Interest = %f",SI);
    return 0;
}