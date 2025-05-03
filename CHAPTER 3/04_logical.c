#include <stdio.h>

int main(){
    int a = 1 , b = 1;

    printf("The value of a and b is %d\n",a&&b);
    printf("The value of a or b is %d\n",a||b);
    printf("The value of a(not) %d\n",!a);


    if(a)
    {
        if(b)
        {
            printf("Both are true!\n");
        }
    }


    //it is same as writing ..

    if(a && b)
    {
        printf("Both are true!\n");
    }
    return 0;
}