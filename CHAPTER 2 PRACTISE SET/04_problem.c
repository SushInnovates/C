
#include <stdio.h>

int main(){
    /* 3 * x / y - z + k
    where x=2,y=3,z=3,k=1
    6 / y - z + k
    2 - z + k
    -1 + k
    -2
     */

     int x=2,y=3,z=3,k=1;
     float e = 3 * x / y - z + k;
     printf("result = %f",e);
    return 0;
}   