#include <stdio.h>

int main(){
    //to convert celcius to fehrenheit

    float celcius,fehrenheit;

    printf("Enter Temperature in  Celcius :");
    scanf("%f",&celcius);
    fehrenheit = (celcius * 9.0/5)+32;
    printf("Celcius is Converted into Fehrenheit...\n");
    printf("Fehrenheit = %.2f",fehrenheit);
    return 0;
}