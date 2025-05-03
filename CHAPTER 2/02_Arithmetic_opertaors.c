#include <stdio.h>

int main(){
    //ARithemtic operators
    //Addition
    int a,b,c,c1,c2,c3,c4;
    printf("Enter Value for a = ");
    scanf("%d",&a);
    printf("Enter Value for b = ");
    scanf("%d",&b); 
    c = a + b;
    c1 = a - b;
    c2 = a * b;
    c3 = a / b;
    c4 = a % b;
    printf("Addition = %d \n",c);   
    printf("Substraction = %d \n",c1);   
    printf("Multiplication = %d \n",c2);   
    printf("Division = %d \n",c3);   
    printf("Modulus = %d \n",c4);   
    return 0;
}