#include <stdio.h>

int main(){
    int n=23;
    float b = 34.5;

    printf("Typecasting....");

    // int a = (float)n;
    n = (int)b;

    // printf("%d\n",a);
    printf("%d\n",n);
    return 0;
}