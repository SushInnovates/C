#include <stdio.h>

int main(){
//if both the operands are integer then output will be interger ex 10/6=1.666667.. but in c it will get demotion to 1
//if one the operands is integer and other is float then output will be interger ex 10/6=1.666667.. but in c it will be 1.5833..
//if both the operands are floats then output will be interger ex 10/6=1.5833.. but in c it will be 1.666667
    int a= 10;
    int b = 6;

    float c = 10.0;
    int d = 6;

    float e = 12.0;
    float f = 5.0;
    printf("the divison will be %d\n",a/b);
    printf("the divison will be %f\n",c/d);
    printf("the divison will be %f",e/f);
    return 0;
}