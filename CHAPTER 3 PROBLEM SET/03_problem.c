#include <stdio.h>

int main(){
    float IS,Tax=0;

    printf("Income Slab =");
    scanf("%f",&IS);

    printf("INCOME SLAB IS IN LACS\n");
    if(IS >= 2.5 && IS <= 5.0){
        printf("Employee must have to pay \'5\' percent tax!");
    }
    else if(IS > 5.0 && IS <= 10.0)
    {
        printf("Employee must have to pay \'20\' percent tax");
    }
    else if(IS > 10.0)
    {
        printf("Employee must have to pay \'30 \' percent tax");
    }
    else
    {
        printf("Employee dont have to pay tax");
    }
    return 0;
}