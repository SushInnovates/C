#include <stdio.h>

int main(){
    printf("Non-zero\n");

    if(1)
    {
        printf("this if is executed\n");
    }
    if(22234){
        printf("this another if is executed\n");
    }
    if(2.34){
        printf("This another if is executed\n");
    }
    if('c')
    {
        printf("this another if is executed\n");
    }
    if(0)
    {
        printf("this is zero - it will be not executed\n");
    }
    return 0;
}


/*
anything can be executed like integer ,float,character coz these are non zero values

but zero is not part of non zero values so it cant be executed*/